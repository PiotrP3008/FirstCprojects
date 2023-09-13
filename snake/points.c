//
// Created by p7 on 16.07.2023.
//

#include "points.h"

int point_v = 0;
int point_h = 0;

void point()
{
    srand(time(NULL));

    point_v = (rand()%(20 - 1 + 1)) + 1 ;
    point_h = (rand()%(20 - 1 + 1)) + 1;

}