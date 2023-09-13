//
// Created by p7 on 26.06.2023.
//

#include "hangman.h"
int how_many_words = 0;

char words[10][20]={"bird", "computer", "dog", "programming", "compiler", "language",
                    "array", "string", "matrix", "laptop"};

int Homaw(int a){
    int i;

    for(i=0; words[a][i]!='\0'; i++)
    {
        how_many_words++;
    }
    return how_many_words;
}

void Hangman()
{

    printf("______\n|    |\n|    O\n|   /|%c\n|   /%c\n|     ", 92, 92);

}

