#include <stdio.h>
#include <stdlib.h>

struct stats{               //Basic structure of statuses
    char name[50];
    int actionIndex;
    float hp,
    hap,
    hyg,
    soc,
    mon,
    time; //hp = health, hyg = hygiene, mon = money, hap = happiness, soc = social, time = time taken
};

struct work{               //Basic structure of statuses
    char name[50];
    int actionIndex;
    float hp,
    hap,
    hyg,
    soc,
    mon,
    time; //hp = health, hyg = hygiene, mon = money, hap = happiness, soc = social, time = time taken
};

int day = 0;

/*To be added in the future :
    -Race/Class/Type
    -Stats multiplier
    -Time
*/