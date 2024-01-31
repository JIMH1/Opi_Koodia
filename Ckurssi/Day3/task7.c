#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

const int LOTTERYSIZE = 7;

// function declarations
void myfunctionA ();
void calculatesum ();
int calculatesumwithreturn ();
void printsum (int, int);
int calculatesumwitharguments (int,int);
void incrementbyonevalue(int);
void incrementbyonereference(int *);
void swapbyvalue(int,int);
void swapbyreference(int *,int *);

void passingtabletofunctionA(int []);
void passingtabletofunctionC(int *);

int * returntableA();


// function definitions
void myfunctionA () {
    printf("\nHeipähei!\n");
}

void calculatesum () {
    int a,b;
    printf("\nGive two integers\n");
    scanf("%d %d", &a, &b);
    printf("\nSum is %d\n", a+b);
}

int calculatesumwithreturn () {
    int a,b;
    printf("\nGive two integers\n");
    scanf("%d %d", &a, &b);
    return a+b;
}

void printsum (int a, int b) {
    printf("\nSum is %d\n", a+b);
}

int calculatesumwitharguments (int a, int b) {
    return a+b;
}

void incrementbyonevalue(int a) {
    a++;
}

void incrementbyonereference(int *a) {
    (*a)++;
}

void swapbyvalue(int a,int b) {
    int dummy = a;
    a = b;
    b = dummy;
    printf("\n %d %d",a,b);
}

void swapbyreference(int *a, int *b) {
    int dummy = *a;
    *a = *b;
    *b = dummy;
    printf("\n %d %d",*a,*b);
}



void passingtabletofunctionA(int arr[]) {
    printf("\nA %d", arr[0]);
    arr[0] = 100;
    printf("\nA %d", arr[0]);
}



void passingtabletofunctionC(int *arr) {
    printf("\nC %d", arr[0]);
    arr[0] = 100;
    printf("\nC %d", arr[0]);

}

int * returntableA() {
    int *arr = malloc(sizeof(3));
    if (!arr) {
        return NULL;
    }
    for (int iter=0; iter < 3; iter++) {
        arr[iter] = iter+100;        
    }
    return arr;
}


int main() {
    int a,b, result;
    
    

      // Task 07:
    // create swapbyvalue and swapbyreference functions.
    // the take two arguments (a and b) and swap their values
    a = 100, b = 200;
    printf("\na = %d\n",a);
    printf("\nb = %d\n",b);
    swapbyvalue(a,b);
    printf("\na = %d\n",a);
    printf("\nb = %d\n",b);
    swapbyreference(&a,&b);
    printf("\na = %d\n",a);
    printf("\nb = %d\n",b);

    // Arrays in C
    // array has a fixed size
    
    // declaration
    int myarray[10]; // array of ten integers

    // initialization
    for (int i=0; i < 10; i++) {
        myarray[i] = i*10;
    }

    for (int i=0; i < 10; i++) {
        printf("\n %d",myarray[i]);
    }

    // Array initialization does not require size of array
    // as long as it has a set of values
    int myarrayB[5] = { 11,22,33,44,55 };
    int myarrayC[] = { 11,22,33,44,55 };

    // array is a reference
    // you do not need & sign to refer it
    printf("\na = %p\n",myarray); // address

    // array is a reference to first memory location of 
    // a linked list of <datatype> variables.
    printf("\na = %p\n",&(myarray[0])); // address
    for (int iter=0; iter < sizeof(myarray)/sizeof(myarray[0]); iter++) {
        printf("%d %d %p\n", iter, myarray[iter], myarray[iter]);
    }

    for (int i=0; i < 10; i++) {
        printf("\n %d",*(myarray + i));
    }

    printf("\nzzzz\n");
    return 0;

}
