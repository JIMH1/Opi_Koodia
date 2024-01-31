#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main() {

      // Task 05:
    // ask a number between 1 and 10
    // if number is:
    // 10 write "excellent"
    // 8 or 9 write "good"
    // 7 or 6 write "passable"
    // anything else write "low"
    // Use if else structure.    

    int a = 0; 

    printf("\nAnna numero\n");
    scanf("%d",&a);

    switch (a) {
        case 10:        
            printf("\nExcellent!");
            break;
        case 8 ... 9: //koodi toimii kuten pitää vaikka näyttää virheen
            printf("\nGood!");
            break;
        case 6 ... 7: //koodi toimii kuten pitää vaikka näyttää virheen
            printf("\nPassable!");
            break;
        default:
            printf("\nLow!");
            break;
    }

      return 0;
}