#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
// Number Quessing Game
int NQG()
{
    int number, guess, maxquess = 0;
    int replay = 1;
    // if you want to replay game it just ask you to press 1 and enter. If you press anything else it go to menu
    while(replay == 1){
        maxquess = 1;
        //RNG motor to the game
        srand(time(NULL));
        number = rand() % 100+1;
        // Actual game code
        printf("\nNumber Guessing Game\n");

        do{
            printf("Guess the number between 1 to 100\n");
            scanf("%d", &guess);
            getchar();
            // if you quess over 100 or 0 or less than 0. It ask you to quess again. This is not counting as your maxquess
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
                // If you use too many quess it close to game
                printf("\nYou lose!\n");
                printf("\nGAME OVER!\n");
                break;
            }
            // when you choose too big or too small number 
            if(guess>number){
                printf("\nChoose smaler\n");
                maxquess++;
            }
            else if(guess<number){
                printf("\nChoose bigger\n");
                maxquess++;
            }
                //when you nailed it
            else{
                printf("You get it right concrats\n");
                printf("You use %d times to guess it!\n", maxquess);
                printf("\nGAME OVER!\n");
            }
        }
    while(guess!=number);
    //After game ends (too many quess or you nailed it), it allow you to play againg. 1 start it again, and everything else put you back to the menu
    // you can always start game again on the menu. So pressing something else than 1 is not going to quit program.
    printf("Press 1 if you want to play again. Press other value to exit. Your choice: ");
    scanf("%d", &replay);
    getchar();

    }
return 0;
}