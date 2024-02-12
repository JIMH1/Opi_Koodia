#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
#define ARRAYSIZE 5
 
int main() {
   
    int myArray[ARRAYSIZE] = { 11,22,33,44,55 };
    int* pointervariableB = myArray;
    pointervariableB += 2;
    *pointervariableB = 99999;
    pointervariableB -= 2;
 
    for (int i=0; i < ARRAYSIZE; i++) {
        printf("\n%d",*pointervariableB);
        pointervariableB++;        
    }
    pointervariableB -= ARRAYSIZE;        
 
    printf("\n%p",pointervariableB);
    for (int i=0; i < ARRAYSIZE; i++) {
        printf("\n%d",*(pointervariableB+i));        
    }
    printf("\n%p",pointervariableB);
    printf("\n%d",*(pointervariableB+3));        
 
    return 0;
}