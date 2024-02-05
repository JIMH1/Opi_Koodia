#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int returnvalue(void);
int returnthisvalue(int);

int returnvalue(void) {
    return 12345;
}

int returnthisvalue(int arg) {
    return arg;
}

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



    return 0;
}


