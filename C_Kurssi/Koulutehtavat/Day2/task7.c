#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int main() {
     // Task 07: 
    // Iterate rocket launch as
    //      5
    //      4
    //      3
    //      2
    //      1
    //      BOOM!
    // use do - while
    // then use while

    int countDown = 5;

    printf( "Do while:\n" );

    do {
        printf( "%d\n", countDown );
        sleep( 1 );
        countDown--;
    } while ( 0 < countDown );
    printf( "BOOM!\n" );

    countDown = 5;

    printf( "While:\n" );

    while ( 0 < countDown ) {
        printf( "%d\n", countDown );
        sleep( 1 );
        countDown--;
    }
    printf( "BOOM!\n" );
      return 0;
}