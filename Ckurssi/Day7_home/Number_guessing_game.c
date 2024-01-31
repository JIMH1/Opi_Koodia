#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main()
{
    int number, guess, maxquess =0;
    int replay = 1;

    while(replay == 1)
    {
    maxquess = 0;
    //RNG moottori
    srand(time(NULL));
    number = rand() % 100+1;
    // Actual game code
    printf("********************\n");
    printf("\nNumber Guessing Game\n");
    printf("\nAfter Wrong or Right answer.\n");
    printf("Player can choose that do you want to play againg or not\n");
    printf("********************\n");
        
       do{
          printf("Guess the number between 1 to 100\n");
          scanf("%d", &guess);

           if(guess>100){
                // if you try to put over 100
                printf("********************\n");
                printf("Illegal guess. Your guess must be between 1 and 100.\n");
                printf("Try again.\n ");
                printf("********************\n");
           }
           else if(guess<=0){
                // if you try to put 0 or less than 0
                printf("********************\n");
                printf("Illegal guess. Your guess must be between 1 and 100.\n");
                printf("Try again.\n ");
                printf("********************\n");
           }
            else if (maxquess == 9)
            {   
                //what happens when you have quess too many times
                printf("********************\n");
                printf("\nYou lose!\n");
                printf("\nGAME OVER!\n");
                printf("\n You have quess %d times!\n", maxquess);
                printf("********************\n");
                break;
            }
           else if(guess>number){
                //what happens when you quess too small number
                printf("********************\n");
                printf("\nChoose smaler\n");
                printf("********************\n");
                maxquess++;
           }
           else if(guess<number){
                //what happens when you quess too big number
                printf("********************\n");
                printf("\nChoose bigger\n");
                printf("********************\n");
                maxquess++;
           }
            else{
                //What happens when you nailed it
                printf("********************\n");
                printf("********************\n");
                printf("You get it right concrats\n");
                printf("You use %d times to guess it!\n", maxquess);
                printf("\nGAME OVER!\n");
                printf("********************\n");
                printf("********************\n");
           }
       }while(guess!=number);
       //Game give you option to restart the game
       printf("********************\n");
       printf("Press 1 if you want to play again. Press other value to exit. Your choice: ");
       printf("\n********************\n");
       scanf("%d", &replay);

    }
    return 0;
}