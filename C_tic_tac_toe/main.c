
#include "mymath.h"


int main() {

    srand(time(NULL));

    printf("Pole do gry: \n\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n");

    while(1)
    {

        Gamer();
        Win();
        Draw();
        if(wynik==1){
            break;
        }
        Comp();
        Win();
        Draw();
        if(wynik==2){
            break;
        }
    }
    return 0;
}