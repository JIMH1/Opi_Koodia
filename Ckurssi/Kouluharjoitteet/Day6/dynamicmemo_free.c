#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main() {

    //    free(mypointerA); // use this when you test calloc only
    //    free(mypointerA); // use this when you test calloc only
    //    free(mypointerA); // use this when you test calloc only
    //    free(mypointerA); // use this when you test calloc only
    //    free(mypointerA); // use this when you test calloc only
    //    free(mypointerA); // use this when you test calloc only

    // lets use calloc to create an array of 3 elements
    int* mypointerA = 0;
    mypointerA = (int* ) calloc(3,sizeof(int));
    if (mypointerA == NULL) {
        printf("\nMemory allocation error!");
        exit(0); // exit program
    }

    int iter=0;
    do {
        scanf("%d", mypointerA+iter);
        iter++;
    } while (iter < 3);
    printf("\n");

    for(int i=0;i<3;i++) {
        printf("%d ", *(mypointerA+i));
    }
    printf("\n");

//    free(mypointerA); // use this when you test calloc only
//    free(mypointerA); // use this when you test calloc only
//    free(mypointerA); // use this when you test calloc only

   

    return 0;
}