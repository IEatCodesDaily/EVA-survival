#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "action.c"
#include "dialogue.h"

void dowork(),newdisp(),newdisp1(),newdisp2();

void nameinput(){
    printf("\nPlease enter your name:");
    scanf("%s",player.name);
    printf("\nYou are %s, a robot living in EVA. A world known to none.\n\nIn this world, you have 5 stats which are Health, Money, Happiness, Hygiene, and Social.\nWhen your health reaches 0, you will die. Each stats will affect your gameplay.\n\n", player.name);
}

void gamereset(){
    struct stats *playerptr = &player;
    playerptr->hp = 100;
    playerptr->hyg = 100;
    playerptr->hap = 100;
    playerptr->mon = 100;
    playerptr->soc = 100;
    playerptr->time = 0;
    day = 0;
}

void PlayerDo(struct stats *player, struct stats *b){
    player->hp += b->hp;
    player->hyg += b->hyg;
    player->hap += b->hap;
    player->mon += b->mon;
    player->soc += b->soc;
    player->time += b->time;
    actdial(b);
}

void PlayerWork(struct stats *player, struct work *b){
    player->hp += b->hp;
    player->hyg += b->hyg;
    player->hap += b->hap;
    player->mon += b->mon;
    player->soc += b->soc;
    player->time += b->time;
    workdial(b);
}

void action(char act[2]){
    
}

void doact(){
    char act[2];
    newdisp2();
    actionlist();
    printf("\n\nChoose the action you want to do: ");
        while(1){
        scanf("%s", &act);
        if (strcmp(act, "1") == 0){
            PlayerDo(&player, &sleep);
            break;
        }else if (strcmp(act, "2") == 0){
            PlayerDo(&player, &eat);
            break;
        }else if (strcmp(act, "3") == 0){
            PlayerDo(&player, &wash);
            break;
        }else if (strcmp(act, "4") == 0){
            dowork();
            break;
        }else{
            printf("Please input the number of the action.\r");
        }
    }

}



void dowork(){
    char job[2];
    newdisp2();
    joblist();
    printf("\n\nChoose the job you want to take: ");
    while(1){
        scanf("%s", &job);
        if (strcmp(job, "1") == 0){
            PlayerWork(&player, &volunteer);
            break;
        }else if (strcmp(job, "2") == 0){
            PlayerWork(&player, &cashier);
            break;
        }else if (strcmp(job, "3") == 0){
            PlayerWork(&player, &factory);
            break;
        }else if (strcmp(job, "4") == 0){
            PlayerWork(&player, &streetclean);
            break;
        }else{
            printf("Please input the number of the action.");
        }
    }
}

void hpcheck(){
    if (player.hp == 0){
        printf("Your health reached 0, you are dead.");
    }
}

void printstat(struct stats *a, char tag[15]){
    if(tag == "actionIndex"){
        printf("actionIndex: %.2f",a->actionIndex);
    }else if (tag == "name"){
            printf("Name: %.2f",a->name);
    }else if (tag == "health"){
            printf("Health: %.2f",a->hp);
    }else if (tag == "hap"){
            printf("Happiness: %.2f",a->hap);
    }else if (tag == "hyg"){
            printf("Hygiene: %.2f",a->hyg);
    }else if (tag == "mon"){
            printf("Money: %.2f",a->mon);
    }else if (tag == "soc"){
            printf("Social: %.2f",a->soc);
    }
}

void printstats(struct stats *a){

    printf("\n\n%s's Stats", a->name);
    printf("\nHealth    : %.2f", a->hp);
    printf("\nHappiness : %.2f", a->hap);
    printf("\nHygiene   : %.2f", a->hyg);
    printf("\nSocial    : %.2f", a->soc);
    printf("\nMoney     : %.2f", a->mon);
    if (a != &player){
        printf("\nTime      : %.2f", a->time);
    }
}
#define TITLE "===============================================\n            EVA'S Life Challenge               \n        Survive for a week and you win!        \n==============================================="

void newdisp(){ //clear the console and print title
    system("cls");
    printf(TITLE);

}

void newdisp1(){ //newdisp() with day and hour
    newdisp();
    printf("\nDay %d Hour %.f", day, player.time);
}

void newdisp2(){
    newdisp1();
    printstats(&player);
}
void timecheck(){
    struct stats *playerptr = &player;
    if (player.time >= 24){
        playerptr->hp += -30;
        playerptr->time += -24;
        day += 1;
    }
}
