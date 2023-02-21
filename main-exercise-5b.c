#include <stdio.h>
#include <string.h>

struct StringData 
{
    char array[100];
    int char_count;
    int letter_count;
};

int main()
{
    struct StringData array[5];
    int i;
    int blank_count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a string: ");
        fgets(array[i].array, 100, stdin);
        array[i].char_count = strlen(array[i].array) - 1;
        array[i].letter_count = 0;
        int j;
        for (j = 0; j < array[i].char_count; j++)
        {
            if (isalpha(array[i].array[j]))
            {
                array[i].letter_count++;
            }
        }

        if (array[i].char_count == 0)
        {
            blank_count++;
            if (blank_count == 1)
            {
                puts("First blank lines are not allowed!!");
                
                break;
            }
        }

        printf("Number of characters: %d\n", array[i].char_count);
        printf("Number of letters: %d\n", array[i].letter_count);
        printf("String: %s\n", array[i].array);
    }
    return 0;
}