#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
        // Task 01:
    // Ask user's age
    // if age is 18+, print out "You are adult"    
    // otherwise print out "You are minor"

    int age;
    printf("\nTell me your age?\n");
    scanf("%d", &age);

    ( age >= 18) ?
    ( printf("\nYou are adult\n") ) :
    ( printf("\nYou are minor\n") );

      return 0;
}