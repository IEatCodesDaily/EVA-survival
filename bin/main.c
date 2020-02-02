#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdarg.h>
#include "func.c"

void play();
int main(){
    
    newdisp();
    nameinput();
    system("pause");
    
    play();
    
    printf("\nYou survived for %d Day and %.f hour.\n\n", day, player.time);
    system("pause");
    
    return 0;
}

void play(){
    newdisp1();
    printstats(&player);
    while(player.hp > 0){
        int act = 0;
        actionlist();
        printf("\nChoose the action you want to do: ");
        scanf("%d", &act);
        action(act);
        newdisp1();
        timecheck();
        printstats(&player); 
    }       
}