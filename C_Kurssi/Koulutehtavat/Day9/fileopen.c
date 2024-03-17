#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
 
int main() {
 
 
    FILE* pFile = NULL;
    pFile = fopen ("https://filesamples.com/samples/document/txt/sample3.txt" , "rb" );
    if (pFile==NULL) {
        fputs ("File error",stderr);
        exit (666);
    }
 
    // obtain file size:
    fseek (pFile , 0 , SEEK_END);
    long lSize = ftell (pFile);
    // siirrä lukupää takaisin ensimmäiseen merkkiin
    rewind (pFile);
 
    // allocate memory to contain the whole file:
    char* buffer = (char*) malloc (sizeof(char)*lSize);
    if (buffer == NULL) {
        fputs ("Memory error",stderr);
        exit (666);
    }
 
    // copy the file into the buffer:
    size_t result = fread (buffer,1,lSize,pFile);
    if (result != lSize) {
        fputs ("Reading error",stderr);
        exit (666);
    }
 
    /* the whole file is now loaded in the memory buffer. */
    // Print on screen or to file...
    printf("Here is Memory buffer content:\n%s", buffer);
    //FILE * wFile;
    //wFile = fopen ("skriv.txt","w");
    //fputs (buffer,wFile);
 
 
    // terminate connection
    //fclose (wFile);
    fclose (pFile);
    free (buffer);
    system("PAUSE");
 
    return 0;
}