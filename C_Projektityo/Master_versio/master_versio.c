#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>

//RPS engine
int rps(char you, char computer)
{
    if (you == computer)
        return -1;
    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's') 
        return 1;
    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;
    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;
}
//RPS engine end

//main code start
int main(){
    //Interface engine
    int choice = 0;
    
    while(true){
        printf("Welcome to play!!!!\n");
        printf("\nChoose your game\n");
        printf("1. Number Guessing Game\n");
        printf("2. Rock Paper Scissors\n");
        printf("3. Close your app\n");
        printf("Your number:  ");
        scanf("%d", &choice);
        getchar();

        switch (choice){
            // Number Guessing Game's code
            case 1:
                int number, guess, maxquess = 0;
                int replay = 1;

                while(replay == 1){
                    maxquess = 1;
                    //RNG motor to NGG
                    srand(time(NULL));
                    number = rand() % 100+1;
                    // Actual game code
                    printf("\nNumber Guessing Game\n");
        
                    do{
                        printf("Guess the number between 1 to 100\n");
                        scanf("%d", &guess);
                        getchar();

                        if(guess>100){
                            printf("Illegal guess. Your guess must be between 1 and 100.\n");
                            printf("Try again.\n ");
                       }
                        if(guess<=0){
                            printf("Illegal guess. Your guess must be between 1 and 100.\n");
                            printf("Try again.\n ");
                        }
                        if (maxquess > 9)
                        {   
                            printf("\nYou lose!\n");
                            printf("\nGAME OVER!\n");
                            break;
                        }
                        if(guess>number){
                            printf("\nChoose smaler\n");
                            maxquess++;
                        }
                        else if(guess<number){
                            printf("\nChoose bigger\n");
                            maxquess++;
                        }
                        else{
                            printf("You get it right concrats\n");
                            printf("You use %d times to guess it!\n", maxquess);
                            printf("\nGAME OVER!\n");
                        }
                    }
                while(guess!=number);
                //Game give you option to restart the game
                printf("Press 1 if you want to play again. Press other value to exit. Your choice: ");
                scanf("%d", &replay);
                getchar();

                }
                break;

            case 2:
                //RPS game code
                int n;
                char you, computer, result;
                int replayA = 1;

                while(replayA == 1){
                printf("\nChoose your weapon\n");
                printf("s like Stone,\n");
                printf("o as paper,\n");
                printf("z as Scissors\n");
                scanf("%c", &you);
                getchar();

                srand(time(NULL));
                n = rand() % 100;
                if (n < 33)
                    computer = 's';
                else if (n > 33 && n < 66)
                    computer = 'p';
                else
                    computer = 'z';
                result = rps(you, computer);
                if (result == -1) {
                    printf("\nIT IS TIE!!!\n");
                }
                else if (result == 1) {
                    printf("\nYOU WIN!!!\n");
                }
                else { 
                    printf("\nYOU LOOSE!!!!\n");
                }
                printf("Your choose was %c and NPC choose : %c\n",you, computer);
                //Game give you option to restart the game
                printf("Press 1 if you want to play again. Press other value to exit. Your choice: ");
                scanf("%d", &replayA);
                getchar();

                }
                break;

            case 3:
                exit(0);
                break;


            // if you choose wrong "case number"
            default:
            printf("\nError! operator is not correct\n");
        }
    }

    return 0;
}