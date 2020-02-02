#define TITLE "===============================================\n            EVA'S Life Challenge               \n        Survive for a week and you win!        \n==============================================="
#include <stdlib.h>
#include <stdio.h>
#include "action.c"
#include "dialogue.h"
void printstats(struct stats *a);
void nameinput(){
    printf("\nPlease enter your name:");
    gets(player.name);
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

    //stats logic
        if(player->hp <0){
            player->hp=0;
            }
        if(player->hp>100){
            player->hp=100;
            }

        if(player->hap<0){
            player->hap=0;
            }
        if(player->hap>100){
            player->hap=100;
            }

        if(player->hyg<0){
            player->hyg=0;
            }
        if(player->hyg>100){
            player->hyg=100;
            }

        if(player->soc<0){
            player->soc=0;
            }
        if(player->soc>100){
            player->soc=100;
            }

        //health decrease relation
        if(player->hap<=60 && player->hap>40){
            player->hp-=3;
        };
        if(player->hap<=40 && player->hap>25){
            player->hp-=5;
        };
        if(player->hap<=25 && player->hap>15){
            player->hp-=7;
        };
        if(player->hap<=15){
            player->hp-=10;
        };

        //==============================//

        if(player->hyg<=60 && player->hyg>40){
            player->hp-=3;
        };
        if(player->hyg<=40 && player->hyg>25){
            player->hp-=5;
        };
        if(player->hyg<=25 && player->hyg>15){
            player->hp-=8;
        };
        if(player->hyg<=15){
            player->hp-=11;
        };

        //==============================//

        if(player->soc<=60 && player->soc>40){
            player->hp-=1;
        };
        if(player->soc<=40 && player->soc>25){
            player->hp-=3;
        };
        if(player->soc<=25 && player->soc>15){
            player->hp-=6;
        };
        if(player->soc<=15 && player->soc>5){
            player->hp-=10;
        };
        if(player->soc<=5){
            player->hp-=15;
        }

}

void playerWork(struct stats *player, struct work *b){
    player->hp += b->hp;
    player->hyg += b->hyg;
    player->hap += b->hap;
    player->mon += b->mon;
    player->soc += b->soc;
    player->time += b->time;
}

void action(int act){
    if (act == 1){
            PlayerDo(&player, &sleep);
        }else if (act == 2){
            if (money>=5){
            PlayerDo(&player, &eat);
            }
        }else if (act == 3){
            PlayerDo(&player, &wash);
        }else if (act == 4 ){
            playerWork(&player,&volunteer);
        }else if (act == 5){
            playerWork(&player,&cashier);

        }else if (act == 6){
            playerWork(&player,&factory);
        }else if (act == 7){
            playerWork(&player,&streetclean);
        }else if (act == 8){
            PlayerDo(&player,&spin);
        }else if (act == 9){
			PlayerDo(&player,&rubik);
        }else if (act == 10){
			PlayerDo(&player,&car);
        }else if (act == 11){
            PlayerDo(&player,&chat);
        }else if (act == 12){
            if(money>=25){
            PlayerDo(&player,&buySpin);
            spinner+=1;
            }
        }else if (act == 13){
            if(money>=75){
            PlayerDo(&player,&buyRubik);
            rubikCube+=1;
            }
        }else if (act == 14){
            if(money>=140){
            PlayerDo(&player,&buyCar);
            rcCar+=1;
            }
        }

        else{
            printf("Please input the number of the action.");
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
    money=a->mon;
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

void newdisp(){
    system("cls");
    printf(TITLE);

}

void newdisp1(){
    newdisp();
    printf("\nDay %d Hour %.f", day, player.time);
}

void timecheck(){
    struct stats *playerptr = &player;
    if (player.time >= 24){
        playerptr->hp += -30;
        playerptr->time += -24;
        day += 1;
    }
}
