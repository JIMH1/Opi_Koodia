#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 

 // void pointerin idea on luoda geneerinen osoitin
 Tö
int main() {
      int a  = 123, b = 456;
   
    // void pointer
    // You can have pointer which does not have data type
    // This makes pointer a generic pointer

    a = 11111, b = 22222;
    float c = 123.456;
    int* myintpointerA = &a;
    float* myfloatpointerA = &c;

    void* voidpointer;
//    voidpointer = myintpointerA;
    voidpointer = &a;
    printf("\n voidpointer says %p", voidpointer);
    printf("\n voidpointer says %d", *((int*) voidpointer));

//    voidpointer = myfloatpointerA;
    voidpointer = &c;
    printf("\n voidpointer says %p", voidpointer);
    printf("\n voidpointer says %f", *((float*) voidpointer));

    // Protip! malloc and calloc return a void pointer...
    a = 123456;
    int* pointerB = (int*) malloc(sizeof(int));
    pointerB = &a;
    printf("\n voidpointerB says %d", *pointerB);

    a = 123456;
    void* pointerC = malloc(sizeof(int));
    pointerC = &a; // void pointer gets integer address
    printf("\n voidpointerB says %d", *((int*) pointerC));

    return 0;
}