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

void getOwner(void) {
    printf("\nHei olen omistaja");

}

int main() {

    // double pointer eli osoitus osoittimeen
    // read following:
    // https://stackoverflow.com/questions/897366/how-do-pointer-to-pointers-work-in-c-and-when-might-you-use-them

    // Real life scenarios have variables.
    // These variable addresses are given as values to 
    // pointer variables.
    // However, it is possible to have a double pointer.
    // It means another pointer variable has value of 
    // address of first pointer.

    int table = 123;

    int* room;
    room = &table;

    int** house;
    house = &room;

    // Note! Each level of pointer adds a new * star.
    // thus it is possible to have int**** neighborhood;

    printf("\n%x", &table);
    printf("\n%x", room);
    printf("\n%x", house);

    printf("\n%d", table);
    printf("\n%d", *room);
    printf("\n%d", **house);

    // Note! Each level of indirect operator adds a new * star.

    // Next we try to make an array with double pointer
    int myarray[5] = { 111, 222, 333, 444, 555 };
    int* mypointer[5] = { myarray, myarray+1, myarray+2, myarray+3, myarray+4 };
    int** mainpointer = mypointer;

    printf("\n%d",**mainpointer);
    mainpointer++;
    printf("\n%d",**mainpointer);
    mainpointer--;
    printf("\n%d",**mainpointer);

    // following three commands are equal:
    *mainpointer++;
    //(*mainpointer)++;
    //*(mainpointer++);

    printf("\n%d",**mainpointer);

    // you can set values through pointer variable
    **mainpointer = 1234;
    printf("\n");
    for (int i=0; i < 5; i++) {
        printf("%d ",myarray[i]);
    }
    printf("\n");

    //
    // pointer artihmetics
    //

    // you can move forwards and backwards in array with pointer variable
    // each movement is equal to:
    // <new address> = <old address> + i * sizeof(<datatype>)
    // 32-bit int increases 2 bytes (2 tavua)
    // 64-bit int increases 4 bytes (4 tavua)

    // This tests what happens when we add to address
    // 64-bit int should increase by 4.
    int myvariableA = 100;
    int* mypointerA = &myvariableA;
    printf("\n%x %d", mypointerA, *mypointerA);
    mypointerA += 1;
    // address is 4 bytes larger but content is random garbage
    printf("\n%x %d", mypointerA, *mypointerA);
    mypointerA--;
    printf("\n%x %d", mypointerA, *mypointerA);

    // you can go through an array with pointer!
    // We start with address of array and then loop
    // as many times as array has elements    

    int* mypointerB = myarray;
    for (int i=0; i < 5; i++) {
        printf("\n%d",*(mypointerB+i));        
    }

    // Note! There is no limit to number of pointer 
    // variables that have same memory location as value.

    // addition and removing values with pointers
    myvariableA = 1000;
    int* mypointerC = &myvariableA;
    // this code is wrong!
    // it increases address positon by 100 * 4 = 400 bytes
    // mypointerC += 100;
    // printf("\n%d",*mypointerC);

    // this code is correct!
    // it increases content of address by 100
    *mypointerC += 100;
    printf("\n%d",*mypointerC);

    // pointer to function(s)

    int result = 0;
    int (*mypointerD)();
    mypointerD = &returnvalue;

    // Following two function calls are correct
    // result = (*mypointerD)();
    result = mypointerD();

    printf("\nresult = %d",result);

    // You can even make an array of functions
    // lets create an array for functions first
    // int (*test)(); // typical function pointer
    // int (*test[x])(); // array of function pointers
    // int (*(*test)[x]))(); // pointer variable that 
    // uses an array of function pointers

    // step 1: create an array of function pointers
    int (*functionpointerarray[3])();

    // step 2: set functions to array
    functionpointerarray[0] = returnvalue;
    functionpointerarray[1] = returnthisvalue;
    functionpointerarray[2] = returnvalue;

    // step 3: create overall pointer
    // mainfunctionpointer is a pointer variable
    // its data type is function pointer array of 3 elements
    int (*(*mainfunctionpointer)[3])();

    // step 4: set address of function pointer array
    // to mainfunctionpointer
    mainfunctionpointer = &functionpointerarray;

    // step 5: make function call to first element
    // mainfunctionpointer -> functionpointerarray[0]
    // its content is returnvalue(void)
    //result = (**mainfunctionpointer)();
    result = (*(*mainfunctionpointer))();
    printf("\nResult is %d", result);

    // step 6: move to second function call
    // mainfunctionpointer -> functionpointerarray[1]
    // its content is returnthisvalue(int)
    // solution: get mainfunctionpointer and get its value
    // this is first element in array of function pointers
    // then move forwards of this element
    // then call its value (which is actual function call)
    result = (*((*mainfunctionpointer)+1))(0);
    printf("\nResult is %d", result);
    result = (*((*mainfunctionpointer)+1))(9999);
    printf("\nResult is %d", result);

    // step 7: move to third function call
    // mainfunctionpointer -> functionpointerarray[2]
    // its content is returnvalue(void)
    result = (*((*mainfunctionpointer) + 2))();
    printf("\nResult is %d", result);


    printf("\nrun similar kinds of functions");

    // step 1: create an array of function pointers
    int (*functionpointerarrayB[3])();

    // step 2: set functions to array
    functionpointerarrayB[0] = returnthisvalue;
    functionpointerarrayB[1] = returnthisvalue;
    functionpointerarrayB[2] = returnthisvalue;

    int (*(*mainfunctionpointerB)[3])();
    mainfunctionpointerB = &functionpointerarrayB;

    for (int iter=0; iter < 3; iter++) {
        result = (*((*mainfunctionpointerB) + iter))(iter*100);
        printf("\nResult is %d", result);
    }


    return 0;
}