#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
int main() {
   
    char* result = (char*)(malloc(sizeof(char) * 0));
    memset(result, 0, 10); // täyttää varatun alueen \0 merkillä,
    //eli nyt jokainen annettu "merkkijono" on laillinen, kunhan loppuun jää 
    //ainakin yksi \0 merkki.

    printf("Addr of result var : %p }n", result);
    printf("result : %s }n", result);
    strcpy(result, "kukka"); // käytä tätä asettaaksesi arvon
    *result = "Q";
    *(result+5) = "!";


    printf("result : %s \n", result); //Qukka!

        free(result);


    return 0;
}