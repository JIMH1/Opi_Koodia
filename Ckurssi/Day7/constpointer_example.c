#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
int main() {
   
    // const pointer
    // chosen variable can be changed
    // pointer cannot change value of variable
    const int* myconstpointer;
    int a  = 123, b = 456;

    // you can change address that is stored...
    myconstpointer = &a;
    myconstpointer = &b;
    // you cannot directly change value in the address stored
    //*myconstpointer = 789;
    printf("\n%d", *myconstpointer);

    // constant pointer to a constant
    // you must set variable at definition
    // pointer cannot change variable
    // pointer cannot change value of variable

    const int* const myconstpointerB = &a;
    a = 111, b = 222;
    // These two lines cause errors!
    //*myconstpointerB = 999;
    //myconstpointerB = &b;
    a = 123;
    b = 555;    
    printf("\n%d", *myconstpointerB);

    return 0;
}