//
// Created by p7 on 27.06.2023.
//

#include "hangman.h"


int negpnt=0;

char words[10][20]={"bird", "computer", "dog", "programming", "compiler", "language",
                           "array", "string", "matrix", "laptop"};
char look[100];
int how_many_words = 0;
bool reset = false;

int win = 0;
char letter;
int i;



int Homaw(int a){
    for(i=0; words[a][i]!='\0'; i++)
    {
        how_many_words++;
    }
    return how_many_words;
}

void Write(){
    printf("\n");
    for (i = 0; i < how_many_words; ++i) {
        look[i] = '_';
        printf("%c", look[i]);
    }
}

void Draw_hangman()
{

    switch (negpnt) {
        case 1: printf("      \n|     \n|     \n|      \n|     \n|     \n\n");
            break;
        case 2:printf("______\n|     \n|     \n|      \n|     \n|     \n\n");
            break;
        case 3:printf("______\n|    |\n|     \n|      \n|     \n|     \n\n");
            break;
        case 4:printf("______\n|    |\n|    O\n|      \n|     \n|     \n\n");
            break;
        case 5:printf("______\n|    |\n|    O\n|    | \n|     \n|     \n\n");
            break;
        case 6:printf("______\n|    |\n|    O\n|   /| \n|     \n|     \n\n");
            break;
        case 7:printf("______\n|    |\n|    O\n|   /|%c\n|     \n|     \n\n", 92);
            break;
        case 8:printf("______\n|    |\n|    O\n|   /|%c\n|   / \n|     \n\n", 92);
            break;
        case 9:printf("______\n|    |\n|    O\n|   /|%c\n|   /%c\n|     \n\n", 92, 92);

            break;
        default:
            break;
    }

    for (i = 0; i < how_many_words; ++i) {
        printf("%c", look[i]);
    }
}

void Win_lost()
{
    if(negpnt==9)
    {
        negpnt = 0;
        printf("\nPrzegrales :((");
        reset = true;
    }

    if(win==how_many_words) {
        printf("\nWygrales!!");
        reset = true;
    }
}

void Hangman_heart(int c)
{
    int point = 0;
    for (i = 0; i < how_many_words; ++i) {
        if(look[i]==letter) {
            printf("\nPodales te litere\n");
            point++;
            break;
        }
        if(words[c][i]==letter) {
            look[i]=letter;
            point++;
            win++;
        }
    }
    if(point==0)
        negpnt++;
    Draw_hangman();
    Win_lost();
}

void Hangman_head()
{
    int cho = 1;
    printf("Witaj w grze wisielec, zaczynajmy.\n\n\n");

    int b = rand() % 9;
    Homaw(b);
    Write();


    while (1) {

        switch (cho) {
            case 1:
                printf("\nPodaj litere: ");
                scanf(" %c", &letter);
                Hangman_heart(b);
                if (reset == true) {
                    cho = 2;
                    reset = false;
                    negpnt = 0;
                    how_many_words = 0;
                    win = 0;
                }
                continue;
            case 2:
                printf("\n\nZagraj ponownie: 1\nZakoncz: 3\n");
                scanf(" %d", &cho);
                if(cho==1)
                {
                    b = rand() % 9;
                    Homaw(b);
                    Write();
                    continue;
                }
            default:
                break;
        }

        break;

    }
}

