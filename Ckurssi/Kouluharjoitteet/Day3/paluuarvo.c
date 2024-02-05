#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void laskeAjaB(int aaa,int bbb,int* loppu){
    *loppu = aaa + bbb;
}

int main() {

 int alkuarvoA = 1234, alkuarvoB = 1234, loppuarvo = 0;
 laskeAjaB(alkuarvoA, alkuarvoB, &loppuarvo);
 printf("%d" ,loppuarvo);

//luo funktio lasketilavuus
//joka ottaa 3 arvoa (pituus,leveys ja korkeus)
//ja palauttaa 2 arvoa (pohjanala ja tilavuus)


  return 0;
  }