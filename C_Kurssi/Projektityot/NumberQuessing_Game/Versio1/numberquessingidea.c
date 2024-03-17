
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

void arvaa(int);

void arvaa(int luku)
{
    int numero, arvaus, montakertaa = 0;

        // initialize randomizer
        srand( time(NULL));

        // luodaan satunnainen luku
        numero = rand() % luku;

        printf("Arvaa numero 1 ja %d välillä\n", luku);

        // Avataan do while looppi, joka pyörii niin kauan kun pelaaja arvaa ohjelman generoiman luvun tai arvauskerrat tulee täyteen
        do
        {
            if (montakertaa > 9)
            {
                printf("\nHävisit!\n");
                break;
            }
           
            // Pelaajan arvaus
            scanf("%d", &arvaus);

            // Jos pelaajan arvaus on suuri
            if (arvaus > numero)
            {
                printf("\nPienempi\n");
                montakertaa++; // lisätään arvauskertojen määrä
            }

            // Jos pelaajan arvaus on pieni
            else if (numero > arvaus)
            {
                printf("\nSuurempi\n");
                montakertaa++;
            }

            else
            {
                printf("Olet arvannut numeron %d yrittämällä!\n", montakertaa); // tulostaa montako kertaa piti yrittää, että osui kohdilleen
            }
           
           
           
        } while (arvaus != numero);
       

}


int main()
{
   
    int luku = 100;

    arvaa(luku);

   
    return 0;
}
