#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int main() {    
   // Task 08:
   // write Task 07 using for loop.
    for (int iter = 5; iter > 0; iter--) {
        printf("\n%d",iter);
    }
    printf("\nBOOM!\n");


    // break; continue;
    // break jumps from loop
    // continue returns to beginning of loop
    // continues going through the loop
    for (int iter = 5; iter > 0; iter--) {
        if (iter == 3) {
            break; // jumps off loop
        }
        printf("\n%d",iter);
    }
    printf("\nBOOM!\n");

    for (int iter = 5; iter > 0; iter--) {
        if (iter == 3) {
            continue; // jumps to beginning of loop
        }
        printf("\n%d",iter);
    }
    printf("\nBOOM!\n");


    return 0;
}