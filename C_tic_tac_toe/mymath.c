//
// Created by p7 on 25.06.2023.
//

#include "mymath.h"

int tab[9] = {5, 5, 5, 5, 5, 5, 5, 5, 5};
int wynik = 0;

void Comp(){
    int a;
    a=rand()%8;
    while(tab[a]!=5) {
        a=rand()%8;
    }
    switch (a) {

        case 0: tab[0]=0;
            break;
        case 1: tab[1]=0;
            break;
        case 2: tab[2]=0;
            break;
        case 3: tab[3]=0;
            break;
        case 4: tab[4]=0;
            break;
        case 5: tab[5]=0;
            break;
        case 6: tab[6]=0;
            break;
        case 7: tab[7]=0;
            break;
        case 8: tab[8]=0;
            break;
    }
}

void Gamer() {

    int tic = 0;
    printf("\nWybierz pole:\n");
    scanf("%d", &tic);

    while (1) {
        if (tab[tic-1] != 5) {
            printf("\nTo pole jest już zajete!! Wybierz inne\n");
            scanf("%d", &tic);
        }
        else
            break;
    }


    switch (tic) {
        case 1: tab[0]=1;
            break;
        case 2: tab[1]=1;
            break;
        case 3: tab[2]=1;
            break;
        case 4: tab[3]=1;
            break;
        case 5: tab[4]=1;
            break;
        case 6: tab[5]=1;
            break;
        case 7: tab[6]=1;
            break;
        case 8: tab[7]=1;
            break;
        case 9: tab[8]=1;
            break;
    }
}

void Draw()
{
    char tac[9];
    int i;
    for (i = 0; i < 9; ++i) {
        if(tab[i]==1)
            tac[i]='X';

        if(tab[i]==0)
            tac[i]='O';

        if(tab[i]==5)
            tac[i]=' ';


    }
    printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", tac[0], tac[1],tac[2],tac[3],tac[4],tac[5],tac[6],tac[7],tac[8]);

}

void Win()
{
    if(tab[0]+tab[1]+tab[2]==3 || tab[3]+tab[4]+tab[5]==3 || tab[6]+tab[7]+tab[8]==3 || tab[0]+tab[4]+tab[8]==3 || tab[6]+tab[4]+tab[2]==3) {
        printf("Wygrywa gracz!!");
        wynik = 1;
    }

    if(tab[0]+tab[1]+tab[2]==0 || tab[3]+tab[4]+tab[5]==0 || tab[6]+tab[7]+tab[8]==0 || tab[0]+tab[4]+tab[8]==0 || tab[6]+tab[4]+tab[2]==0) {
        printf("Wygrywa komputer :(");
        wynik = 2;
    }
}