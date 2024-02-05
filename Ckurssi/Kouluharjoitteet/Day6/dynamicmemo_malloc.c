#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main() { 

//
    // Dynamic memory
    //
    // pointer variable stores address of variable.
    // What happens if variable is deleted?
    // pointer variable retains address.
    // content of address may exist or change...
    // i.e. content may change in future.
    // Programming when variable values change randomly is not fun!

    // usual solution is to control existence of variable life  
    // this means dynamic memory allocation and de-allocation
    // https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

    // step 1: 
    // create int datatyped pointer variable dynamically
    int* mypointerE = (int*) malloc(sizeof(int));

    int myvariableE = 123456;

    mypointerE = &myvariableE;

    printf("\n%x %d",mypointerE, *mypointerE);

    // step 2:
    // de-allocate and free memory
    free(mypointerE);

    printf("\n%x %d",mypointerE, *mypointerE);

    // lets create bad programming
    // create variable that is destroyed

    int* mypointerF;

    {
        int dummy = 12345;
        mypointerF = &dummy;
    }
    // because dummy has been destroyed, this is now pointing
    // to variable that no more exist.
    // error cannot be seen with usual tools and is manifested
    // after some times if/when memory location gets new value!
    //printf("\n%x %d",&dummy, dummy);
    printf("\n%x %d",mypointerF, *mypointerF);

    // You can also create a temporary variable
    int *testpointer;
    // This reserves area for 4 integers in memory
    // testpointer value is address of first element
    testpointer = malloc(4 * sizeof(int));
    // NOTE! memory allocation is NEVER 100% certain
    // Thus we use testpointer only if memory allocation succeeds
    if (testpointer != NULL) {
        // testpointer address + N is used to set values
        // to reserved positions in memory
        *testpointer = 1234; // sets to first position
        *(testpointer + 2) = 333; // sets to third position
        // positions 2 and 4 are full of garbage...
    }
    // print out all 4 memory slots
    for (int iter=0; iter < 4; iter++) {
        printf("\n temporary memory in slot %d is %d", iter, *(testpointer + iter));
    }

    free(testpointer);

        // lets use malloc to create an array of 3 elements
    int* mypointerA = 0;
    mypointerA = (int* ) malloc(sizeof(int)*3);
//    mypointerA = (int* ) calloc(3,sizeof(int));

    int iter=0;
    do {
        scanf("%d", mypointerA+iter);
        iter++;
    } while (iter < 3);
    printf("\n");

    for(int i=0;i<3;i++) {
        printf("\n%x %d ", mypointerA+i ,*(mypointerA+i));
    }
    printf("\n");

    free(mypointerA);

    return 0;
}

