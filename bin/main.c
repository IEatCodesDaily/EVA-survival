#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stats.h"

int main(){


    printf("===============================================");
    printf("\n            EVA'S Life Challenge               ");
    printf("\n        Survive for a week and you win!        ");
    printf("\n===============================================");
    
    struct stats player;
    player.actionIndex = 0;
    player.hp = 100;
    player.hap = 100;
    player.mon = 1000;
    player.hyg = 100;

    printf("\nPlease enter your name: ");
    scanf ("%[^\n]%*c", player.name);
    printf("%s", player.name);

    system("pause");
    return 0;
}