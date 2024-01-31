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

    // Task 04:
    // Do task 01 but use function that only calculates 
    // sum of two arguments
int main() {
    int a,b, result;

    printf("\nGive two integers\n");
    scanf("%d %d", &a, &b);
    result = calculatesumwitharguments(a,b);
    printf("\nSum is %d\n", result);
}
