    // Välitehtävä
// luo funktio laskealueenkoko(), joka ottaa 2 argumenttia.
// Laske funktiossa alueenkoko ja tulosta se funktiossa.
 
// luo funktio laskekuutio(), joka ottaa 3 float argumenttia.
// funktio palauttaa kuution koon. Tulosta pääohjelmassa tilavuus koko.
 
// luo funktio haetieto(), jolla on 3 argumenttia.
// Funktio kutsuu laskekuutiota ja tulostaa kuution koon.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

/*int a = 5, b = 10;
alueenkoko(a,b);

printf("%.2f", laskekuutio(1.3, 4.5, 6.878));


haetieto(1.33,2.77,4.11)*/

void laskealueenkoko () {
    int a,b;
    printf("\nGive two integers\n");
    scanf("%d %d", &a, &b);
    printf("\nSum is %d\n", a+b);
}

int laskekuutio () {
    int a,b,c;
    printf("\nGive 3 integers\n");
    scanf("%d %d %d", &a, &b, &c);
    return a*b*c;
}

int main() {
 
  laskealueenkoko();

  laskekuutio();
 
  return 0;
  }