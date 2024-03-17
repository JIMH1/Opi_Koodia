#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

void funktioA(int);
void funktioB(int*);

void funktioA(int aaa)
{
    aaa++;
}

void funktioB(int* aaa)
{(*aaa)++;;}

int main() {
 
int qqq = 100;
printf("\n%d", qqq);
funktioA(qqq);
printf("\n%d", qqq);
funktioB(qqq);
printf("\n%d", qqq);

int kukka = 12345;
printf("\n%d\n", kukka);
printf("\n%p\n", kukka); //muistipaikka jossa kukka on talletettu
printf("\n%d\n", kukka); // kukan muistipaikan sisältö
*(&kukka) += 67890;
printf("\n%d\n", kukka);
 // tällä kikalla voidaan siirtää kukan sijaintia ja sisältöä
  return 0;
  }