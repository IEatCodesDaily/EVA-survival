#include <stdio.h>
#include <stdlib.h>

struct stats{               //Basic structure of statuses
    char name[50];
    int actionIndex,
    hp,
    hyg,
    hap,
    mon,
    soc; //hp = health, hyg = hygiene, mon = money, hap = happiness, soc = social
};

void PlayerDo(struct stats *player, struct stats *b){
    player->hp += b->hp;
    player->hap += b->hap;
    player->hyg += b->hyg;
    player->mon += b->mon;
    player->soc += b->soc;
}

/*To be added in the future :
    -Race/Class/Type
    -Stats multiplier
    -Time
*/