#include <stdio.h>

struct record {
  char text[100];
  int numChars;
  int numLetters;
};

int main(void) {
  struct record data;
  int i;
  
  // Read user input
  printf("Please enter a line of text: ");
  fgets(data.text, sizeof(data.text), stdin);
  
  // Count number of characters
  data.numChars = 0;
  for (i = 0; data.text[i] != '\0'; i++) {
    data.numChars++;
  }
  
  // Count number of letters
  data.numLetters = 0;
  for (i = 0; data.text[i] != '\0'; i++) {
    if ( (data.text[i] >= 'a' && data.text[i] <= 'z') || (data.text[i] >= 'A' && data.text[i] <= 'Z') ) {
      data.numLetters++;
    }
  }
  
  // Output results
  printf("Number of characters: %d\n", data.numChars);
  printf("Number of letters: %d\n", data.numLetters);
  printf("Text: %s", data.text);
  
  return 0;
}