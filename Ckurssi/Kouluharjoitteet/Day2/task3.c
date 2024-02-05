#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
     // Task 03:
    // Ask a number from user.
    // explain if it is an even or odd number.
    int a, b;
    
    printf("\nGive a number\n");
    scanf("%d",&a);

    if (a % 2) {
        printf("\nIt is odd number!");
    } else {
        printf("\nIt is even number!");
    }

      return 0;
}