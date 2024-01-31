#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

void printvalue(int);

void printvalue(int arg) {
    printf("\nprintvalue is %d\n",arg);
}


int main() {

    struct House {
        int age;
        float size;
    } myhouse;

    //
    // pointers (osoitin eli pointteri)
    //
    // pointer is a variable.
    // pointer stores address of another variable.
    // pointer has datatype.

    // declaration of a pointer:
    // <datatype>* <variablename>;

    // Here we create a variable
    // Upon declaration it reserves memory address
    // size of memory reserved is int.
    // It is determined by datatype.
    int myVariableA = 123;
    // location in memory
    printf("\n%x", &myVariableA);

    // now we create a pointer variable
    // its datatype must be int as we use it with myVariableA.
    // pointer declaration syntax is <datatype>* <variablename>
    int* pointervariableA; 

    // pointervariable gets address as value.
    // pointer always gets address of variable as value!
    pointervariableA = &myVariableA;    

    // pointervariable has address as value.
    // thus its use when addresses are used is following:
    printf("\n%x", pointervariableA);

    // pointervariable has address. 
    // contents of this address can be read with use of
    // indirection operator * 
    // This only works with pointer variable!
    // syntax is: *<variablename>

    //printf("\n%d", *myVariableA); // causes error
    printf("\n%d", myVariableA);
    printf("\n%d", *pointervariableA);

    // thus variable shows value stored to address
    // thus &variable shows address
    // thus *pointervariable shows value stored to address
    // thus pointervariable shows address

    // pointer stores address of variable and this leads
    // to many possible variations

    // pointer storing address of array
    // array is a list of values 
    int myArray[5] = { 11,22,33,44,55 };

    // pointervariable must point towards datatype array
    // array always has elements in sequence
    // thus you can move forwards one memory location at time

    // array is a reference to array of elements
    // This allows movement of array reference to function
    int* pointervariableB = myArray;
    printf("\n");
    for (int iter=0; iter < 5; iter++) {
        printf("%d ", *pointervariableB);
        // following code line moves pointervariable address
        // forwards one integer variable. Thus pointervariable
        // datatype must be same as length of variable.
        pointervariableB++;
    }
    // You can also make an pointervariable array 
    // that takes in an array
    // syntax is:
    // <datatype> (*<pointername>)[<arraysize];
    int (*pointervariableC)[5];
    // We give this pointervariable value.
    // it is array of same size
    // Thus every pointervariable in array gets its 
    // own address from array element
    pointervariableC = &myArray;

    printf("\n");
    for (int iter=0; iter < 5; iter++) {
        printf("%x ", (pointervariableC)[iter]);
        printf("%d ", (*pointervariableC)[iter]);
    }

    // pointer can also point towards a function
    // this is called function pointer

    // <function returnvalue> (*<pointervariablename>)(<function arguments>)
    void(*pointervariableD)(int) = &printvalue;

    printf("\n%x\n",pointervariableD);

    // here content of pointervariable is a function
    pointervariableD(222);
    // indirect operator * makes a function call also possible
    (*pointervariableD)(111);

       // Tehtävä 02:
    // you have two integer variables: aaa and bbb
    // swap values of variables using pointers
    int aaa = 777, bbb = 888;
    printf("\n aaa=%d and bbb=%d", aaa,bbb);    
    int* pointerA = &aaa;
    int* pointerB = &bbb;

    // We can see that you can have mathematics with
    // * signs using values of memory locations
    *pointerA = *pointerA + *pointerB; // A + B --> A+B ==> in A
    *pointerB = *pointerA - *pointerB; // A+B - B --> A ==> in B
    *pointerA = *pointerA - *pointerB; // A+B - A --> B ==> in A

    printf("\n aaa=%d and bbb=%d", aaa,bbb);    

    return 0;
}
