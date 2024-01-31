#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int main() 
{
    // file operations

    // Case: Read entire file
/*
    // this defines we are doing file io operations
    FILE *pointertofileA;
    char tempcharA;

    // fopen() is used to open connection to buffer
//    pointertofileA = fopen("helloworld.c","r");
    pointertofileA = fopen("fileA.c","r");

    while(true) {
        // read a character from buffer opened
        tempcharA = fgetc(pointertofileA);
        
        // leave the reading loop once file has been read
        // We use reserved word EOF (end of file).
        if (tempcharA == EOF) {
            break;
        }
        
        // print out the read character
        printf("%c", tempcharA);
    }

    // at the end we must close the buffer to file
  fclose(pointertofileA);
*/
/*
    // Write to a file

    FILE *pointertofileA;

    // create a new file name and set it as w (writing)
    pointertofileA = fopen("fileA.c","w");

    // fprintf() is used to write entire text to a file
    char text[30] = " Hello to you\nand to me!";
    fprintf(pointertofileA, text); 

    // close the stream with fclose()
    fclose(pointertofileA);
*/
/*
    // you can read data and store it to buffer
   
    FILE *pointertofileA;

    // create a new file name and set it as r (reading)
    pointertofileA = fopen("fileA.c","r");

    // create a buffer for streaming
    // it needs to be large (experience states size)
    char buffer[255];

    // we need to create a buffer and stream its contents
    while (fscanf(pointertofileA,"%s", buffer)!=EOF) {
        // we test buffer creation by filling it with data
        printf("%s", buffer);
    }

    // close the stream with fclose()
    fclose(pointertofileA);
*/

    // you can insert data to a buffer to be stored to file
/*
    FILE *pointertofileA;
    char name[30];
    int age;

    // create a new file name and set it as w+ (writing and reading)
    pointertofileA = fopen("fileA.c","w+");
//    pointertofileA = fopen("fileA.c","a"); // a means append

    // if creation of file fails...
    if (pointertofileA == NULL) {
        printf("\nFile creation error!");
        return(666);
    }

    printf("\nInput data... name?");
    scanf("%s", name); // Aku
    fprintf(pointertofileA,"%s\n",name);

    printf("\nInput data... age?");
    scanf(" %d", &age); // 123
    fprintf(pointertofileA,"%d\n",age);

    fclose(pointertofileA);
*/

    // usually we insert and read by a line
    
    FILE *pointertofileA;
    
    pointertofileA = fopen("fileA.c","w");

    fputs("This is a line!\n", pointertofileA);
    fputs("12345", pointertofileA);

    fclose(pointertofileA);

    pointertofileA = fopen("fileA.c","r");
    char buffer[255];
    printf("%s",fgets(buffer,255, pointertofileA));
    printf("\nbuffer content at position 1: %s",buffer);
    printf("%s",fgets(buffer,255, pointertofileA));
    printf("\nbuffer content at position 2: %s",buffer);
    
    fclose(pointertofileA);


/*     FILE *pointertofileA;
    char buffer[255];

    pointertofileA = fopen("fileA.c","r");
    while(fgets(buffer, sizeof(buffer), pointertofileA))
    {
        printf("%s", buffer);
    }
    fclose(pointertofileA);
 */

    return 0;
}