#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.c"

void play();
int main(){

    printf("===============================================");
    printf("\n            EVA'S Life Challenge               ");
    printf("\n        Survive for a week and you win!        ");
    printf("\n===============================================");
    
    play();
    
    return 0;
}

void play(){
    int action = 0;
    while(1){
        printf("\nChoose the action you want to do: ");
        scanf("%d", &action);
        if (action == 1){
            PlayerDo(&player, &sleep);
        }
    }

    printf("\n\nPlayer's stats\n\nHP: %d\nHappiness: %d", player.hp, player.hap);
    system("pause");
}