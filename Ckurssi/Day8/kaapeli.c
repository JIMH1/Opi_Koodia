#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
enum Kaapeli {
    kuparilanka = 100025,
    kaksoiskuparilanka,
    koaksikaapeli_6_johtoa = 200001,
    koaksikaapeli_12_johtoa,
 
};
 
int main() {
 
    enum Kaapeli tempKaapeli;
 
    tempKaapeli = koaksikaapeli_12_johtoa;
 
    printf("\n Kaapeli is %d", tempKaapeli);
 
 
    return 0;
}