#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.c"

void play();
int main(){

    newdisp();
    nameinput();
    system("pause");
    play();
            
    return 0;
}

void play(){
    int action = 0;
    while(1){
        newdisp();
        printstats(&player);
        actionlist();
        printf("\nChoose the action you want to do: ");
        scanf("%d", &action);
        if (action == 1){       
            PlayerDo(&player, &sleep);
        }else if (action == 2){
            PlayerDo(&player, &eat);
        }else if (action == 3){
            PlayerDo(&player, &wash);
        }else{
            break;
        }
        timecheck();
    }

    system("pause");                
}