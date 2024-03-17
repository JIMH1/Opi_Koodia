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
void sortarray(int [LOTTERYSIZE], int);

void passingtabletofunctionA(int []);
void passingtabletofunctionB(int [LOTTERYSIZE]);
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

void sortarray(int array[LOTTERYSIZE], int size) {
    for (int iter=0; iter < size; iter++) {
        for (int iter2=iter+1; iter2 < size; iter2++) {
            if (array[iter2] > array[iter]) {
                swapbyreference(&array[iter2],&array[iter]);        
            }
        }
    }
}

void passingtabletofunctionA(int arr[]) {
    printf("\nA %d", arr[0]);
    arr[0] = 100;
    printf("\nA %d", arr[0]);
}

void passingtabletofunctionB(int arr[LOTTERYSIZE]) {
    printf("\nB %d", arr[0]);
    arr[0] = 100;
    printf("\nB %d", arr[0]);
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
    
    srand( time(NULL));

   
    int lotterynumbers[LOTTERYSIZE];
    for (int i=0; i < LOTTERYSIZE; i++ ) {
        lotterynumbers[i] = (rand() % 39) + 1;        
    }


    // Task 09:   
    // Create an function sortarray that sorts array of integers
    // it has arguments for array to be sorted and size of array

    sortarray(lotterynumbers, LOTTERYSIZE);

    return 0;

}
