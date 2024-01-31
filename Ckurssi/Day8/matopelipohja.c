#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>
 
const int MAX_WIDTH = 60;  // movable area max width
const int MAX_HEIGHT = 20; // movable area max height
 
COORD c = {0, 0};
 
// Set cursor position (x,y) on screen. Origo = left,top
void setxy (int x, int y) {
    c.X = x; c.Y = y; // Set X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 
// Hide or show cursor
void cursorVisible(bool cursorHidden) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 10;
    info.bVisible = cursorHidden;
    SetConsoleCursorInfo(consoleHandle, &info);
}
 
int main() {
 
    char key_code;
    int number;
    int x = 0;
    int y = 0;
    char merkki = 'O';
 
    cursorVisible(false);
 
    system("cls"); // clear screen
    while (1){
        if ( _kbhit() ) // wait keypress
            key_code = _getch(); // get pressed key
            if (key_code == 'a') { x--; if (x<0)  {x = 0;} }
            if (key_code == 'd') { x++; if (x > MAX_WIDTH) {x = MAX_WIDTH;}}
            if (key_code == 'w') { y--; if (y<0)  {y = 0;} }
            if (key_code == 's') { y++; if (y>MAX_HEIGHT)  {y = MAX_HEIGHT;}}
 
            if (key_code == 'x') {cursorVisible(true); exit(0);} // press x to end program
            setxy(x,y);
            printf("%c",merkki);
            key_code = ' '; // pressed key must be cleared
        }
 
    return 0;
}