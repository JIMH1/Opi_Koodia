// Osoitinmuuttujatehtävä 1
// luo float tyyppinen muuttuja ja osoitinmuuttuja,
// jolle annat muuttujan arvoksi
// ilmoita muuttujien sijainti muistissa
// ilmoita muuttujien arvot
// hae osoitinmuuttujan sisältämän muuttujan arvo

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main() {
float myFloat = 111.234;
float* myFloatPointer = &myFloat;
printf("\n sijainnit: %x %x", &myFloat, &myFloatPointer);
printf("\n arvot: %F %x %F", myFloat, myFloatPointer, *myFloatPointer);


return 0;
}