#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
    // Tehtävä 
    // luo void funktio lasketilavuus,
    // joka ottaa 3 arvoa (pituus, leveys ja korkeus)
    // ja palauttaa 2 laskettua arvoa (pohjanala ja tilavuus)

    void lasketilavuus(int, int, int, int*, int*); 
    void lasketilavuus(int pituus, int leveys, int korkeus, int* pohjanala, int* tilavuus) {
        *pohjanala = pituus * leveys;
        *tilavuus = *pohjanala * korkeus;
    }
    
    int main() {
    int pituus = 5, leveys = 8, korkeus = 12, pohjanala, tilavuus;
    lasketilavuus(pituus, leveys, korkeus, &pohjanala, &tilavuus);
    printf("\n%d %d", pohjanala, tilavuus);


  return 0;
  }