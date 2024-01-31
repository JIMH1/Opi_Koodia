#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int LOTTERYSIZE = 7;

// function declarations
void myfunctionA ();
void calculatesum ();
int calculatesumwithreturn ();
void printsum (int, int);
int calculatesumwitharguments (int,int);

void alueenkoko(int,int);
float laskekuutio(float,float,float);
void haetieto(float,float,float);

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

void alueenkoko(int aaa,int bbb) {
    printf("\n%d",aaa*bbb);
}

float laskekuutio(float aaa,float bbb,float ccc) {
    return aaa*bbb*ccc;
}
void haetieto(float aaa,float bbb,float ccc) {
    printf("\n%f", laskekuutio(aaa,bbb,ccc));
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
    // Task 11:
    // Create a 4x4 array and fill it with random numbers (1 to 100)
    int my2Darray[4][4];

    for (int Yaxis=0; Yaxis < 4; Yaxis++) {
        for (int Xaxis=0; Xaxis < 4; Xaxis++) {
            my2Darray[Yaxis][Xaxis] = (rand() % 99) + 1;
        }
        printf("\n");
    }
    printf("\n");

    // Task 12:
    // Print out the array
    // Then find out largest and smallest value in array
    int largest=0, smallest=101;
    for (int Yaxis=0; Yaxis < 4; Yaxis++) {
        for (int Xaxis=0; Xaxis < 4; Xaxis++) {
            printf("%d ",my2Darray[Yaxis][Xaxis]);
            if (my2Darray[Yaxis][Xaxis] > largest) {
                largest = my2Darray[Yaxis][Xaxis];
            } 
            if (my2Darray[Yaxis][Xaxis] < smallest) {
                smallest = my2Darray[Yaxis][Xaxis];
            } 
        }
        printf("\n");
    }
    printf("\n");
    printf("\nLargest = %d", largest);    
    printf("\nSmallest = %d", smallest);    
    printf("\n");

    // passing table to a function
    int passarray[7] = {1,2,3,4,5,6,7};
    passarray[0] = 1;
    passingtabletofunctionA(passarray);
    printf("\nA = %d",passarray[0]);
    passarray[0] = 1;
    passingtabletofunctionC(passarray);
    printf("\nB = %d",passarray[0]);
    passarray[0] = 1;
    passingtabletofunctionC(passarray);
    printf("\nC = %d",passarray[0]);

    // getting table as a return value from function
    int *arr = returntableA();
    for (int iter=0; iter < 3; iter++) {
        printf("\n%d ---", arr[iter]);
    }


    return 0;

}
