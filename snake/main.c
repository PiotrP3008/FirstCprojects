#include "snake.h"
#include "points.h"


 void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}



int main() {


    hideCursor();
    board();


    while (1) {

        if(go==1) {
            printf("Game over");
            Sleep(1000);
            break; }
        else {
            snake_head();
        }


    }

    return 0;
}