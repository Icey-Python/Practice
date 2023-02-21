
#include <stdio.h>
#include <string.h>

// Structure containing an array of characters and two integers
struct str {
    char text[100];
    int num_char;
    int num_letter;
};

//Union containing a single byte and a structure containing bit fields
union byte_and_bits {
    unsigned char byte;
    struct {
        unsigned right_bit : 1;
        unsigned left_bit : 1;
    }bits;
};

int main()
{
    //Declare an array of 5 structs
    struct str array[5];
    int i;
    int j;

    //Read a line of text from the user into each of the 5 structs
    for (i = 0; i < 5; i++) {
        printf("Enter a line of text:\n");
        fgets(array[i].text, 100, stdin);
    }

    //Check for blank line entered
    if (strlen(array[0].text) == 1) {
        printf("Program terminating...\n");
        return 0;
    }

    //Count number of characters and number of letters in each of the 5 structs
    for (i = 0; i < 5; i++) {
        int num_char_count = 0;
        int num_letter_count = 0;

        for (j = 0; j < strlen(array[i].text); j++) {
            if ((array[i].text[j] >= 'a' && array[i].text[j] <= 'z') ||
                (array[i].text[j] >= 'A' && array[i].text[j] <= 'Z')) {
                num_letter_count++;
            }
            num_char_count++;
        }
        array[i].num_char = num_char_count;
        array[i].num_letter = num_letter_count;
    }

    //Encrypt each letter in turn by swiping the bytes without using any shift or mask operators
    for (i = 0; i < 5; i++) {
        for (j = 0; j < strlen(array[i].text); j++) {
            union byte_and_bits letter;
            letter.byte = array[i].text[j];
            unsigned char temp = letter.bits.right_bit;
            letter.bits.right_bit = letter.bits.left_bit;
            letter.bits.left_bit = temp;
            array[i].text[j] = letter.byte;
        }
    }

    //Output the counts and the encrypted text to the computer screen
    for (i = 0; i < 5; i++) {
        printf("Number of Characters: %d\n", array[i].num_char);
        printf("Number of Letters: %d\n", array[i].num_letter);
        printf("Encrypted Text: %s\n", array[i].text);
    }

    return 0;
}