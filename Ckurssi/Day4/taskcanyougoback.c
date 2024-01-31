#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main() 
{
int myArray[5] = { 11,22,33,44,55};
printf("\n%p", &myArray);
printf("\n%p", &myArray[0]);
printf("\n%p", &myArray[1]);
printf("\n%p", &myArray[2]);
printf("\n%p", &myArray[3]);
printf("\n%p", &myArray[4]);

int (*myPointerArray)[5];
myPointerArray = myArray;
printf("\n%p %d", myPointerArray[0], (*myPointerArray)[0]);
printf("\n%p %d", myPointerArray[1], (*myPointerArray)[1]);
printf("\n%p %d", myPointerArray[2], (*myPointerArray)[2]);
printf("\n%p %d", myPointerArray[3], (*myPointerArray)[3]);
printf("\n%p %d", myPointerArray[4], (*myPointerArray)[4]);


int*myPointerToArray = myArray;
for (int iter=0; iter < 5; iter++) {
    printf("\n %d", *myPointerToArray);
    myPointerToArray++;
}

// Osoitinmuuttujatehtävä 2
    // muuta esimerkkiä niin että siirryt ylös ja sitten alaspäin.
    // Onnistuuko siirtyminen?
    // Entä jos viittaat aluksi myArray[4] elementtiin etkä koko arrayhin?

myPointerToArray--;
for (int iter=4; iter >= 0; iter--){
    printf("\n %d", *myPointerToArray);
    myPointerToArray--;
}

int* myPointerToArrayElement = myArray[4];
printf("\n %d", *myPointerToArrayElement);
myPointerToArrayElement--;
printf("\n %d", *myPointerToArrayElement);
  return 0;
}