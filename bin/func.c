#include <stdlib.h>
#include <stdio.h>
#include "action.c"

void nameinput(){
    printf("\nPlease enter your name: ");
    scanf ("%[^\n]%*c", player.name);
    printf("You are %s, a robot living in EVA. A world known to none. In this world, you have 5 stats which are Health, Money, Happiness, Hygiene, and Social.\nWhen your health reaches 0, you will die. Each stats will affect your gameplay.", player.name);
}
void PlayerDo(struct stats *player, struct stats *b){
    player->hp += b->hp;
    player->hap += b->hap;
    player->hyg += b->hyg;
    player->mon += b->mon;
    player->soc += b->soc;
}

void hpcheck(){
    if (player.hp == 0){
        printf("Your health reached 0, you are dead.");
        exit(0);
    }
}

void actioncheck();