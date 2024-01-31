#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void tulostaarray(int[], int);

void tulostaarray(int myarray [], int lkm) {
    for (int iter=0; iter < lkm; iter++)
    {
        printf("\n%d", myarray[iter]);
    }
}

void muutaarray(int myarray[], int index, int value) {
    myarray[index] = value;
}

void myfunc();


int main() {
 
int myarray[] = { 1,2,3,4,5 };
myarray[0] = 111; 
tulostaarray(myarray,5);

//n luo funktio muutaarray
//joka ottaa sisäänsä arrayn, indexsin ja uuden arvon
// esim. myarray, 3, 88

muutaarray(myarray, 3, 88);

tulostaarray(myarray,5);
 
  return 0;
  }