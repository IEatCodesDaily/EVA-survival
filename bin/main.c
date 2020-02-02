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
    newdisp2();//title, time, player stats.
    while(player.hp > 0){
        timecheck();
        doact();
        newdisp2();
        timecheck();
    }       
} 
