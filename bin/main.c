#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "action.c"


int main(){

    int aksi = 0;

    printf("===============================================");
    printf("\n            EVA'S Life Challenge               ");
    printf("\n        Survive for a week and you win!        ");
    printf("\n===============================================");
    

    printf("\nPlease enter your name: ");
    scanf ("%[^\n]%*c", player.name);
    printf("You are %s, a robot living in EVA. A world known to none. In this world, you have 5 stats which are Health, Money, Happiness, Hygiene, and Social.\nWhen your health reaches 0, you will die. Each stats will affect your gameplay.", player.name);

    printf("\nChoose the action you want to do: ");
    scanf("%d", &aksi);

    if (aksi == 1){
        PlayerDo(&player, &sleep);
    }
    
    printf("\n\nPlayer's stats\n\nHP: %d\nHappiness: %d", player.hp, player.hap);
    system("pause");
    return 0;
}