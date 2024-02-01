#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>

int MENUU(){
    int choice = 0;
    // game menu start. It is using cases.
    while(true){
        printf("You are underage\n");
        printf("You can play whit us, but only Rock-Paper-Scissors\n");
        printf("\nChoose your game\n");
        printf("1. Number Quessing Game - K-18 game\n");
        printf("2. Rock-Paper-Scissors\n");
        printf("3. Close your app\n");
        printf("Your number:  ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            // NQG is only over 18 years old
            printf("You are under 18, you can't play this game");
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