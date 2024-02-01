#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "menu.c"

int main(){
    // game ask your name
    int age = 0;

    printf("\nTell me your age?\n");
    scanf("%d", &age);
    // gaming is only allowed to 18+ years old
    if (age > 17) {
        //if you are 18+ years old it allow you to go "menuc. file"
        printf("You are adult\n");
        printf("You can play whit us\n");
        MENU();
    }
    else {
        // if you are not adult it just tell it and end program.
        printf("You are too young to play");
    }

    return 0;
}