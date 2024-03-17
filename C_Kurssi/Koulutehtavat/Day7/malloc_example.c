#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
int main() {
   
    int* mypointerE = (int*) malloc( 5* sizeof(int));
    *mypointerE = 111;
    *(mypointerE+1) = 222;
    *(mypointerE+2) = 333;
    *(mypointerE+3) = 444;
    // HUOM! Viimeinen muistipaikka on roskaa, koska luotu mallocilla.
 
    for (int i=0; i < 5; i++) {
        printf("\n%d", *(mypointerE+i));
    }
 
    return 0;
}