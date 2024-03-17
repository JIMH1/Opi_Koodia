#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
 
// define is used to define certain values
// and keywords
#define TESTI

#ifndef TESTI
// #error is used to generate error messages
// during compilation
// #warning works in same way as well.
#warning This is an pragma warning message
#error This is an pragma error message
#endif


// You can add your own libraries
// #include "mylib.h" // same directory
// #include "src/mylib.h" // src sub-directory
// #include "../mylib.h" //up one level
// #include "../file/mylib.h" //up one level and then file directory
// #include "day07.h"


// here you can define macros for compiler

// this is a object-like macro
// it substitutes text PII with text 3.14 
// WARNING! define replaces the keyword with
// content in code. It does not check validity.

#define PII 3.14
// You can redefine anything by doing #undef first!
#undef PII
#define PII 3

// this is a function like macro
// these are usually simple one line long functions
// these are common way to supplement C commands
#define MIN(a,b) ((a) < (b) ? (a) : (b))

// You can undefine macros
// it destroys existing define
// WARNING! this command destroys PII macro
// Thus compiler doers not understand PII and fails
// #undef PII

// #undef works from line it was declared onwards
// this can create weird logical errors
#define MYVALUE 1234
int mysquare = MYVALUE * MYVALUE;
#undef MYVALUE

// C has also inbuilt macros
// __DATE__
// __TIME__
// __FILE__  current file name
// __LINE__  what is current line number to be executed
// __STDC__  1/0 for if compiler works according to ANSI standard

// You can control execution of macros with
// #ifdef and #endif
// Here we control flow of code within main() function
// using TRAFFICLIGHT macro 
#define TRAFFICLIGHT

// #ifndef macro is typically used to set something up
// typical case is definition of libraries
// following code is error because you can define library only once
//#include "day07.h"
//#include "day07.h"


#ifndef DAY07_LIBRARY
    #define DAY07_LIBRARY
    #include "day07.h"
#endif

#ifndef DAY07_LIBRARY
    #define DAY07_LIBRARY
    #include "day07.h"
#endif


// #pragma is used to generate standard messages 
// from compiling code...
// pragma commands depend on compiler
// https://www.geeksforgeeks.org/pragma-directive-in-c-c/

void mystartupfunc();
void mystopfunc();

/*
#pragma startup mystartupfunc
#pragma end mystopfunc
*/

void mystartupfunc() {
    printf("\nHELLUREI!!!!");
    getch();
}
void mystopfunc() {
    printf("\nHUBBABPUPPA!!!!");
    getch();

}
void printinfo(struct Testi arg);
void printinfotoo(struct Testi* arg);

void printinfo(struct Testi arg) {
    printf("\n Hei %s! Olet %d vuotta vanha! ", arg.name, arg.age);
    // seuraavat ei toimi, koska alkuperäinen ei muutu
    arg.age = 6666666;
    sprintf(arg.name,"Puttepossu"); 
}

void printinfotoo(struct Testi* arg) {
    printf("\n Hei %s! Olet %d vuotta vanha! ", arg->name, arg->age);
    // toimii, koska osoittimen osoittaman muistipaikan arvoa
    // muutetaan suoraan
    arg->age = 777777;
    sprintf(arg->name,"Kumbalesia");
}


int main(int argc, char* argv[]) {

    // command line arguments
    // argc is number of arguments
    // argv is the argument element in array
    printf("\nYour argument is %s\n", argv[0]);
    printf("\nYour argument is %s\n", argv[1]);
    printf("\nYour argument is %s\n", argv[2]);

    // test this by writing
    // day07.exe JEEE
    // day07.exe "JEPULIS JA JUUSTO"

    // preprosessor directives
    // you can give compiler commands (macros).
    // They are fired before compiler runs.
    // syntax is #<directive>

    // most common directives are:
    // #include -- adds libraries to program
    // #define -- adds substitute word to program
    // #if #else etc for ordering compiler
    // #pragma for ordering compiler options

    // Use macros

    printf("\n file macro is %s", __FILE__);
    printf("\n date macro is %s", __DATE__);
    printf("\n line is %d", __LINE__);
    printf("\n compiler is %d", __STDC__);

    // statements set in your own header files
    // are accessed like they had been added to 
    // this file as long as you have added the
    // header useing #include macro command
    writehelloworld();

    printf("\n pii is %f", PII);

    printf("\n smallest of %d and %d is %d", 4, 8, MIN(4,8));
    
    printf("\n myquare is %d", mysquare);

    // This is a simple yes/no check to code
    // typically this kind of programming is used to
    // set logging on/off like functionality
    // or set development/production compilation functionality
    //#undef TRAFFICLIGHT

    #ifdef TRAFFICLIGHT
        printf("\n TRAFFICLIGHT was used!");
        printf("\n file macro is %s", __FILE__);
        printf("\n time macro is %s", __TIME__);
        printf("\n line is %d", __LINE__);
    #else
        printf("\n NO TRAFFICLIGHT was used!");
        printf("\n line is %d", __LINE__);
    #endif

    // 
    // structures
    //
    // following code creates a structure type used in code
    // struct <nimi>
    // {    
    //      <datatype> <name>; 
    //      <datatype> <name>;
    // };
    // this can be used in two ways:

    // method 1:
    struct Structure
    {
        int length;
        int width;
        int age;
    };

    struct Structure mystructureA;

    mystructureA.age = 15;
    mystructureA.length = 5;
    mystructureA.width = 10;

    // method 2:
    struct Building
    {
        int length;
        int width;
        int age;
    } mystructureB;

    mystructureB.age = 30;
    mystructureB.length = 15;
    mystructureB.width = 15;

    struct Building mystructureC;
    mystructureC.age = 30;
    mystructureC.length = 15;
    mystructureC.width = 15;

    // method 3:
    struct BuildingToo 
    {
        int length;
        int width;
        int age;
    } mystructureD, mystructureE, mystructureF;

    struct Structure* mypointer = &mystructureA;
    struct Building* mypointerB = &mystructureB;

    // You use . notation with struct variables
    // You use -> notation with struct pointers
    printf("\nmystructure A size is %d",mystructureA.length*mystructureA.width);
    printf("\nmystructure A size is %d",mypointer->length*mypointer->width);

    //Esimerkki structin käytöstä
    struct Testi myTeststruct;
    myTeststruct.age = 123;
    sprintf(myTeststruct.name, "kukkakauppa");

    struct Testi* myTeststructpointer = &myTeststruct;
    printf("\n%s",myTeststruct.name);
    printf("\n%s",myTeststructpointer->name);

    printinfo(myTeststruct);
    printinfotoo(myTeststructpointer);
    printf("\n%s",myTeststruct.name);
    printf("\n%d",myTeststruct.age);
    printf("\n%s",myTeststructpointer->name);
    printf("\n%d",myTeststructpointer->age);

    printf("\nSTOP\n");



    //
    // typedef is essentially an alias
    //
    // typedef <oldname> <newname>
    // this allows creation of alias on just about anything...
    typedef unsigned int INT;

    INT mymuuttuja;
    unsigned int mymuuttuja2;

    // typedef is obten combined with compiler commands
    #ifdef BITINUSE32
        typedef long MYINT; // 4 bytes long in 32bit
    #else
        typedef int MYINT; // 4 bytes long in 64bit
    #endif


    // typedef is often used with struct

    struct bull 
    {
        int age;
        int weight;
    };

    typedef struct bull STUDBULL;

    STUDBULL mybull;
    mybull.age = 123;
    mybull.weight = 1100;

    typedef int* i_Ptr;
    i_Ptr myP, myP2;

    // structs can be used as arrays

    STUDBULL bullteam[2];
    // animal 
    bullteam[0].age = 1;
    bullteam[0].weight = 800;
    // animal
    bullteam[1].age = 10;
    bullteam[1].weight = 1800;

    int totalweight = 0;
    for(int i=0; i < 2; i++) {
        printf("\n\tBullteam member %d weigths %d kg", i, bullteam[i].weight);
        totalweight += bullteam[i].weight;
    }
    printf("\n\tBullteam weights %d kg!", totalweight);

    // structs are usually nested
    struct Human
    {
        int age;
        struct bull animal; 
    };

    struct Testi janne;
    strcpy(janne.name,"Janne");
    janne.age = 111;

    printinfo(janne);

    // union is struct that shares same data location
    // thus they are same...
    // https://www.tutorialspoint.com/cprogramming/c_unions.htm
    union abc
    {
        int a;
        char b;
        float c;
    } testaus;

    // enums
    // enumeration is a created list of values
    // first is 0 as default
    // you can also set value by hand
//    enum fruits {banana, strawberry, pinetree};
    enum fruits {
        banana = 101, 
        strawberry, 
        pinetree
    } fruitbasket;

    // set value to this list
    fruitbasket = strawberry;
    fruitbasket = pinetree;

    // print out the current value
    printf("\n fruit is %d", fruitbasket); // 103

    return 0;
}
