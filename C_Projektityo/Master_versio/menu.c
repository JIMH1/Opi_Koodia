#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "rps.c"
#include "nqg.c"

int MENU(){
    int choice = 0;
    // game menu start. It is using cases.
    while(true){
        printf("\nChoose your game\n");
        printf("1. Number Quessing Game\n");
        printf("2. Rock-Paper-Scissors\n");
        printf("3. Close your app\n");
        printf("Your number:  ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            // case 1 start Nubmer Quessing Game on file nqg.c
                NQG();
                break;

            case 2:
            // case 1 start Rock-Paper-Scissors Game on file rps.c
                RPS();
                break;

            case 3:
            // and case 3 just quit the aplication
                exit(0);
                break;


            // If you try to use another number, it just tell it. and ask you to use some working number
            default:
            printf("\nError! operator is not correct\n");
        }
    }

    return 0;
}