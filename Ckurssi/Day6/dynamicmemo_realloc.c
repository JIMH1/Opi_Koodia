#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main() {
/*
    int juttu = 555;
    int* koe = (int* ) malloc(sizeof(int));
    if (koe == NULL) {
        printf("\nMemory allocation error!");
        exit(0); // exit program
    }
    printf("\n %x %d", koe, *koe);

    //*koe = juttu;
    koe = &juttu;
    juttu = 11111;
    printf("\n %x %d", koe, *koe);
    if (koe != NULL) {
        free(koe);
    }
    
    koe = NULL;

    //juttu = NULL;
*/


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

    // lets use calloc to create an array of 3 elements
    int* mypointerA = 0;
    mypointerA = (int* ) calloc(3,sizeof(int));
    if (mypointerA == NULL) {
        printf("\nMemory allocation error!");
        exit(0); // exit program
    }

    int iter=0;
    do {
        scanf("%d", mypointerA+iter);
        iter++;
    } while (iter < 3);
    printf("\n");

    for(int i=0;i<3;i++) {
        printf("%d ", *(mypointerA+i));
    }
    printf("\n");

//    free(mypointerA); // use this when you test calloc only

    // realloc allows changing memory allocation
    mypointerA = (int* ) realloc(mypointerA,2);
    if (mypointerA == NULL) {
        printf("\nMemory allocation error!");
        exit(0); // exit program
    }

    iter=0;
    do {
        scanf("%d", mypointerA+iter);
        iter++;
    } while (iter < 2);
    printf("\n");

    for(int i=0;i<4;i++) {
        printf("\n%x %d ", mypointerA+i, *(mypointerA+i));
    }
    printf("\n");

    free(mypointerA);

    int size = 5;
    char *mystring = (char *)malloc(sizeof(char) * (size+1));

    strcpy(mystring,"hello");
    
    for(int i=0;i<10;i++) {
        printf("%c ", *(mystring+i));
    }
    printf("\n");

    free(mystring);

    char* result = (char*)(malloc(sizeof(char) * 10));
    memset(result, 0, 10);

    printf("Addr of result var : %p \n", result);

    // This is a wrong way, it reassigns position of result
    // this leads to a new address and thus free command fails.
    // result = "Re-assign";

    // This is a correct way, it stores new value to a selected
    // address. Use this!
    strcpy(result,"Re-assign");
    strcpy(result,"Joulukuu");

    *result = 'K';
    *(result+8) = '!'; 

    memset(result, 0, 10);
    strcpy(result,"Huispa");

    for(int i=0;i<10;i++) {
        printf("%c ", *(result+i));
    }
    printf("\n");
    printf("Addr of result var : %p \n", result);

    free(result);

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


    // null pointer
    // null pointer is any pointer that does not point to any
    // memory location.
    int* mynullpointerA = (int*)0;
    int* mynullpointerB = NULL;
    char* mynullpointerC = '\0';

    // iltapäivän tehtävä: hangman
    // käytä pointtereita
    
    // Luo osoitinmuuttujista 5 elementin taulukko.
    // kukin osoitinmuuttuja on void* 
    // kokeile antaa int, float ja char elementtejä
    // tulosta koko taulukko.

    int aarne = 111, celsius = 333;
    float bertta = 123.456;
    char daavid = 'q';
    char eemeli[10] = "Eemeli"; 

    void * myvoidarr[5];
    myvoidarr[0] = &aarne;
    myvoidarr[1] = &bertta;
    myvoidarr[2] = &celsius;
    myvoidarr[3] = &daavid;
    myvoidarr[4] = &eemeli;

    printf("\n----");
    printf("\n%x %d",myvoidarr[0], *((int*) myvoidarr[0]));
    printf("\n%x %f",myvoidarr[1], *((float*) myvoidarr[1]));
    printf("\n%x %d",myvoidarr[2], *((int*) myvoidarr[2]));
    printf("\n%x %c",myvoidarr[3], *((char*) myvoidarr[3]));
    printf("\n%x %c",myvoidarr[4], *((char*) myvoidarr[4]));
    printf("\n%x %s",myvoidarr[4], (char*) myvoidarr[4]);
    printf("\n----");

    return 0;
}