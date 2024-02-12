#include <stdio.h>
int main() {
    // Task 8:
    // ASCII is integer representation of characters
    // Ask a character from user
    // Then type:
    // "ASCII value of <character> is <ASCII value>"

    char mychar = 'a'; 
    printf("\nGive me a character?\n");
    scanf("%c",&mychar);
    printf("\nASCII value of %c is %d\n",mychar,mychar);
  return 0;
}