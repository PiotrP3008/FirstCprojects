
#include "hangman.h"

int main() {
    srand(time(NULL));

    int i;
    int b = rand()%9;

    Homaw(b);


    Hangman();

    printf("\n\n\n");



    for (i = 0; i < how_many_words; ++i) {
        printf("_ ");
    }
    return 0;
}
