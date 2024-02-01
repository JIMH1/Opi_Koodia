#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 // Rock Paper Scissors game
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
 
// actual game
int RPS()
{
    int n;
                char you, computer, result;
                int replayA = 1;
                // if you want to replay game it just ask you to press 1 and enter. If you press anything else it go to menu

                while(replayA == 1){
                    // first you choose your option
                printf("\nChoose your weapon\n");
                printf("s like Stone,\n");
                printf("o as paper,\n");
                printf("z as Scissors\n");
                scanf("%c", &you);
                getchar();
                    // after that game start rng engine
                srand(time(NULL));
                n = rand() % 100;
                if (n < 33)
                    computer = 's';
                else if (n > 33 && n < 66)
                    computer = 'p';
                else
                    computer = 'z';
                result = rps(you, computer);
                // after that it give you end result
                if (result == -1) {
                    printf("\nIT IS TIE!!!\n");
                }
                else if (result == 1) {
                    printf("\nYOU WIN!!!\n");
                }
                else { 
                    printf("\nYOU LOOSE!!!!\n");
                }
                //After game ends (too many quess or you nailed it), it allow you to play againg. 1 start it again, and everything else put you back to the menu
                // you can always start game again on the menu. So pressing something else than 1 is not going to quit program.
                printf("Press 1 if you want to play again. Press other value to exit. Your choice: ");
                scanf("%d", &replayA);
                getchar();

                }
    return 0;
}