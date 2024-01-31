#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
   
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