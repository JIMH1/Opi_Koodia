#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#define FIELD_SIZE 3 // Playfield.

char field[ FIELD_SIZE ][ FIELD_SIZE ];
/* Position where CPU is planning to play. */
int cpuX = -1;
int cpuY = -1;
int cpuScore = 0; // Score for current position.

int max( int a, int b ) { // <- virhe ei vaikuta koodin toimivuuteen
	return a < b ? b : a;
}

void initField() {
	for ( int x = 0; x < FIELD_SIZE; x++ ) {
		for ( int y = 0; y < FIELD_SIZE; y++ ) {
			field[x][y] = '.';
		}
	}
}

void printField() {
	for ( int y = 0; y < FIELD_SIZE; y++ ) {
		for ( int x = 0; x < FIELD_SIZE; x++ ) {
			printf( "%c", field[x][y] );
		}
		printf( "\n" );
	}
}

// Return true if full.
bool isFieldFull() {
	for ( int x = 0; x < FIELD_SIZE; x++ ) {
		for ( int y = 0; y < FIELD_SIZE; y++ ) {
			if ( field[x][y] == '.' ) {
				return false;
			}
		}
	}
	printf( "\nField full it's a tie!\n" );
	return true;
}

// Uses start position and direction vector to evaluate lines. Also calculates AI.
void checkLine( int x, int y, int vx, int vy, int* player, int* cpu ) {
	int playerLine = 0;
	int cpuLine = 0;
	int freeX = -1; // Use negative to check if free slot found.
	int freeY = -1;

	for ( int i = 0; i < FIELD_SIZE; i++ ) {
		playerLine += field[x][y] == 'X';
		cpuLine += field[x][y] == 'O';

		if ( field[x][y] == '.' ) {
			freeX = x;
			freeY = y;
		}
		x += vx;
		y += vy;
	}
	*player = max( *player, playerLine );
	*cpu = max( *cpu, cpuLine );
	// If CPU itself has only one left, give it highest priority otherwise if player line
	// has only one more to go, try to prevent player for winning.
	// Otherwise try to complete own line.
	if ( 0 <= freeX ) {
		if ( playerLine == 2 ) {
			cpuX = freeX;
			cpuY = freeY;
			cpuScore = 10; // Just a big number to make it high priority.
		}
		else if ( cpuLine == 2 ) {
			cpuX = freeX;
			cpuY = freeY;
			cpuScore = 100; // Just a big number to make it high priority. Actually takes precedence because in else and not the score. 
		}
		else if ( cpuScore == 0 || cpuScore < cpuLine ) {
			cpuX = freeX;
			cpuY = freeY;
			cpuScore = cpuLine;
		}
	}
}

void checkAllLines( int* player, int* cpu ) {
	// Horizontals.
	for ( int y = 0; y < FIELD_SIZE; y++ ) {
		checkLine( 0, y, 1, 0, player, cpu );
	}
	// Verticals.
	for ( int x = 0; x < FIELD_SIZE; x++ ) {
		checkLine( x, 0, 0, 1, player, cpu );
	}
	// Diagonal to right.
	checkLine( 0, 0, 1, 1, player, cpu );
	// Diagonal to left.
	checkLine( FIELD_SIZE - 1, 0, -1, 1, player, cpu );
	cpuScore = 0;
}

// Return false on gameover.
bool checkGame( int x, int y, char c ) {
	/* Max line lengths. */
	int player = 0, cpu = 0;

	field[x][y] = c;
	checkAllLines( &player, &cpu );

	if ( 3 <= player ) {
		printf( "\nPlayer wins!\n" );
		return false;
	}
	else if ( 3 <= cpu ) {
		printf( "\nCpu wins!\n" );
		return false;
	}
	return !isFieldFull();
}

void game() {
	initField();
	bool gaming = true;
	printField();

	while ( gaming ) {
		printf( "\nGive coordinate in format 'x,y' in range 1...3\nInput: " );
		int x = 0, y = 0;
		scanf( "%d,%d", &x, &y );

		if ( 1 <= x && x <= FIELD_SIZE && 1 <= y && y <= FIELD_SIZE && field[x-1][y-1] == '.' ) {
			gaming = checkGame( x-1, y-1, 'X' );

			if ( gaming ) {
				gaming = checkGame( cpuX, cpuY, 'O' );
			}
		}
		else {
			printf( "Invalid location %d, %d. Give another location.\n", x, y );
		}
		printField();
	}
}

int main() {
	printf( "How to play:\nPlayer is 'X'\nComputer is 'O'\n" );
	game();

	return 0;
}
