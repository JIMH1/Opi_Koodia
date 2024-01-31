#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int game(char you, char computer)
{
    //molemmat vastaavat saman
    if (you == computer)
        return -1;
 

    // jos pelaaja valitsee kiven ja koodi paperin
    if (you == 's' && computer == 'p')
        return 0;
 
            // jos kooodi kiven ja pelaaja paperin
            else if (you == 'p' && computer == 's') return 1;
 
    // jos pelaaja kiven ja koodi sakset
    if (you == 's' && computer == 'z')
        return 1;
    // jos pelaaja valitsee sakset ja koodi kiven
    else if (you == 'z' && computer == 's')
        return 0;
 
    // jos pelaaja valitsee paperin ja koodi sakset
    if (you == 'p' && computer == 'z')
        return 0;
 

    // Jos peaala valitsee sakset ja koodi paperin
    else if (you == 'z' && computer == 'p')
        return 1;
}
 

int main()
{
    int n;
    char you, computer, result;

    srand(time(NULL));
    n = rand() % 100;
    if (n < 33)
        computer = 's';
     else if (n > 33 && n < 66)
         computer = 'p';
    else
        computer = 'z';
     printf("\n\n\n\n\t\t\t\t Valitse S kivelle, P kivelle tai z saksille\n\t\t\t\t\t\t\t");
 
    // Käyttäjän valinta
    scanf("%c", &you);
 
    // pelin lopputulos
    result = game(you, computer);
     if (result == -1) {
        printf("\n\n\t\t\t\tTasatulos\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tvoitit koodis\n");
    }
    else { 
        printf("\n\n\t\t\t\tHävisit koodille\n");
    }
        printf("\t\t\t\tSää valitsit : %c ja koodin valinta : %c\n",you, computer);
 
    return 0;
}