#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
int main() {
      int a  = 123, b = 456;
   
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