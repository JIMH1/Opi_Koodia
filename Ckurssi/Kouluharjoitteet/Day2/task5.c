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
    if (a == 10) {
        printf("\nExcellent!");
    } else if (a == 9 || a == 8) {
        printf("\nGood!");
    } else if (a == 7 || a == 6) {
        printf("\nPassable!");
    } else {
        printf("\nLow!");
    }

      return 0;
}