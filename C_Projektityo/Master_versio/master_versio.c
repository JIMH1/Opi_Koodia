#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu.c"
#include "menu_u.c"


int main(void) {
    // game ask your name (just to be nice to player) and age
	int age;
    char name[10] = "";
    printf("Welcome to our game application\n");
    printf("\nTell me your name\n");
    scanf("%s", &name);
    printf("\nHi %s and welcome to our game\n", name);
    printf("\nGame works full only adults, but teens can play some games... so\n");
    printf("\nTell me your age?\n");
    scanf("%d", &age);
	if (age <= 0) {
        // if you put less than 0
		printf("Don't lie to us");
	} else if (age >= 1 && age <= 12) {
        // if you are less than 10 years it don't allow you to play at all
		printf("You are too young to play whit us");
       } else if (age >=13 && age <= 17) {
         // if you are less than 18 but over 10, you go "menu_u.c file" what only allow to start RPS and not NQG
         MENUU();
	} else {
		MENU();
        // if you put your age over 18 it allows you to play both of games
	}
}