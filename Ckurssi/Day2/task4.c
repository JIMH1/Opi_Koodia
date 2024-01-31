#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
    
    // Task 04:
    // input 3 numbers
    // inform the largest number
    
    int a, b, c;
    printf("\nGive three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b) {
        if (a >= c) {
            printf("A biggest");
        } else {
            printf("C biggest");
        }
    } else {
        if (b >= c) {
            printf("B biggest");
        } else {
            printf("C biggest");
        }
    }



    // You can do the same using ternary operations
    if (a >= b) {
        (a >= c) ? printf("A biggest") : printf("C biggest");
    } else {
        (b >= c) ? printf("B biggest") : printf("C biggest");
    }


    // It is possible to create a chain of
    // if expressions using if  - else if structure


      return 0;
}