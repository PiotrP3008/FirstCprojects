//
// Created by p7 on 16.07.2023.
//

#include "snake.h"
#include "map.h"
#include "points.h"

char key;
int go = 0;
int v=10; //vertical
int h=10; //horizontal
int hl, vertical_lenght, horizontal_lenght= 0; //how long
int snaketail[500];

char old_key;

void board()
{
    for (int i = 0; i < 22; ++i) {

        for (int j = 0; j < 22; ++j) {
            if(j==0 || j==21)
                maps[i][j]='|';
        }

        for (int j = 1; j < 21; ++j) {
            if(i==0 || i==21)
                maps[i][j]='-';
        }
    }

    for (int i = 1; i < 21; ++i) {
        for (int j = 1; j < 21; ++j) {
            maps[i][j]=' ';
        }
    }

}


void is_the_point_still_on_the_board(){

    int TorF = 0;
    for (int i = 0; i < 22; ++i) {
        for (int j = 0; j < 22; ++j) {
            if (maps[i][j]=='*')
                TorF++;
        }
    }
    if (TorF==0) {
        point();
        maps[point_v][point_h]='*';
        hl++;
    }

}


void snake_tail()
{
    int position = 0;
    for (int i = 1; i < 21; ++i) {
        for (int j = 1; j < 21; ++j) {
            position = i * 20 + j;
            snaketail[position]=position;
        }
    }

}


void snake_body()
{

    is_the_point_still_on_the_board();

        maps[v][h] = '+';
        for (int i = 0; i < 22; ++i) {
            for (int j = 0; j < 22; ++j) {
                printf("%c", maps[i][j]);
            }
            printf("\n");
        }

        Sleep(500);
        system("cls");


}

void top()
{
    while(1) {
        v=v-1;

        if(h==21||v==21||h==0||v==0)
        {
            go = 1;
            break;
        }

        maps[v+hl][h]=' ';
        snake_body();


        if(kbhit()){
            old_key=72;
            break;
        }
    }
}

void down()
{
    while(1) {
        v=v+1;

        if(h==21||v==21||h==0||v==0)
        {
            go = 1;
            break;
        }

        maps[v-hl][h]=' ';
        snake_body();

        if(kbhit()){
            old_key=80;
            break;
        }
    }
}

void left()
{
    while(1) {
        h=h-1;

        if(h==21||v==21||h==0||v==0)
        {
            go = 1;
            break;
        }

        maps[v][h+hl]=' ';
        snake_body();


        if(kbhit()){
            old_key=75;
            break;
        }
    }
}

void right()
{
    while(1) {

        h=h+1;

        if(h==21||v==21||h==0||v==0)
        {
            go = 1;
            break;
        }

        maps[v][h-hl]=' ';
        snake_body();


        if(kbhit()){
            old_key=77;
                break;
        }
    }
}

void snake_head(){




    if(kbhit()) {
        key = getch(); // Pobieramy znak związany ze strzałką
        switch(key) {
            case 72: // Góra
                printf("%d", old_key);
                if(old_key == 80)
                    down();
                else
                    top();
                break;
            case 80: // Dół
                printf("%d", old_key);
                if(old_key == 72)
                    top();
                else
                    down();
                break;
            case 75: // Lewo
                printf("%d", old_key);
                if(old_key == 77)
                    right();
                else
                    left();
                break;
            case 77: // Prawo
                printf("%d", old_key);
                if(old_key == 75)
                    left();
                else
                    right();
                break;
        }
    }
}
