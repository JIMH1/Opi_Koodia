#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

int korkeus = 6;
int runko = 1;
int lukumaara = 3;
printf("\n");
// ehjä puurivi
for (int iter = 0; iter < korkeus; iter++) {
    for (int lkm = 0; lkm+3 < lukumaara; lkm++) {
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
printf("\n");
// varkaissa käyty puurivi
for (int iter = 0; iter < korkeus; iter++) {
    for (int lkm = 0; lkm+3 < lukumaara; lkm++) {
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
// ehjä puurivi
printf("\n");
for (int iter = 0; iter < korkeus; iter++) {
    for (int lkm = 0; lkm+3 < lukumaara; lkm++) {
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