#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


int main() {
     int muuttuja = 123;
    printf("\n%x %d", &muuttuja, muuttuja);
 
    // 1. osoitinmuuttuja
    int* osoitinmuuttuja1 = NULL;
 
    osoitinmuuttuja1 = &muuttuja;
 
    printf("\n%x %x %d", &osoitinmuuttuja1 , osoitinmuuttuja1, *osoitinmuuttuja1);
 
    // 2. osoitinmuuttuja
    int** osoitinmuuttuja2 = NULL;
 
    osoitinmuuttuja2 = &osoitinmuuttuja1;
 
    printf("\n%x %x %d", osoitinmuuttuja2, *osoitinmuuttuja2, **osoitinmuuttuja2);
 
    // 3. osoitinmuuttuja
    int*** osoitinmuuttuja3 = NULL;
 
    osoitinmuuttuja3 = &osoitinmuuttuja2;

    return 0;
}