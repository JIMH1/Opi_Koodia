#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    
 
    // kotitehtävä
    // ===========

    // char nimi[10] = 'robin hood';
    // tee char array ja tulosta se väärinpäin eli 
    // robin hood on dooh nidor

    // Lisätehtävä:
    // tee for looppi, joka käy läpi char arrayn
    // "clever brown fox jumped over lazy dog"
    // laske montako 'a', 'e' 'i' 'o' 'u' kirjainta siinä on

    printf("\n Robin Hood väärinpäin on ...");
    char nimi[10] = "robin hood";
    for (int i = 10; i >= 0; i--) {
        printf("%c",nimi[i]);
    }
    printf("\nIhan vaan tämmönen osanvaihto");

    int a=0, e=0, i=0, o=0, u=0;
    char text[37] = "clever brown fox jumped over lazy dog";
    for (int iter = 0; iter < 37; iter++) {
        if (text[iter] == 'a') { a++; }
        if (text[iter] == 'e') { e++; }
        if (text[iter] == 'i') { i++; }
        if (text[iter] == 'o') { o++; }
        if (text[iter] == 'u') { u++; }
    }
    printf("%d %d %d %d %d",a,e,i,o,u);
printf("\nIhan vaan tämmönen osanvaihto");
/*
Piirrä joulukuusi, jonka korkeus on X ja varsi Y. 
Kun saat ohjelman toimimaan, tee versio, joka kysyy X ja Y arvot.
Tässä korkeus on 4 ja varsi on 2.
   *
  ***
 *****
*******
   *
   *
*/
/*
// Piirrä kaksi joulukuusta rinnakkain, niiden väli on 10.
   *                *
  ***              ***
 *****            *****
*******          *******
   *                *
   *                *
*/

int korkeus = 6;
int runko = 4;
int lukumaara = 4;
printf("\n");
for (int iter = 0; iter < korkeus; iter++) {
    for (int lkm = 0; lkm < lukumaara; lkm++) {
        // tulosta rivi
        for (int iter2 = 0; iter2 < korkeus-iter; iter2++) {
            printf("%c",' ');
        }
        int dummy = 1 + (iter*2);    
        for (int iter3 = 0; iter3 < dummy; iter3++ ) {
            printf("%c",'*');
        }

        for (int iter2 = 0; iter2 < korkeus-iter; iter2++) {
            printf("%c",' ');
        }
    }
    // vaihda rivi
    printf("\n");
}

for (int iter4=0; iter4 < runko; iter4++) {
    for (int lkm = 0; lkm < lukumaara; lkm++) {
        for (int iter5=0; iter5 < korkeus; iter5++) {
            printf("%c",' ');
        }

        printf("%c",'*');

        for (int iter5=0; iter5 < korkeus; iter5++) {
            printf("%c",' ');
        }

    }
    printf("\n");
}
    return 0;

}