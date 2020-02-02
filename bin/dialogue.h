#include <stdio.h>
#include <stdlib.h>

//init other
float money;
char next;
int p;
//init item
int spinner=0;
int rubikCube=0;
int rcCar=0;

void actionlist(){
    printf("\nWhat should i do?");
    int i = 1;
    while (actlib[i][0] != '\0'){
        printf("\n%d. %s", i, actlib[i]);
        i++;
    }

}

void worklist(){
    printf("\nWhat should i do?\n");
    int i = 1;
    while (worklib[i][0] != '\0'){
        printf("\n%d. %s", i, worklib[i]);
        i++;
    }

}

void joblist(){
    printf("\n What job should i take?");
    int i = 1;
    while (worklib[i][0] != '\0'){
        printf("\n%d. %s\t\t\t\tSalary : $%.f\tDuration : %.f hour", i, worklib[i], salary[i], worktime[i]);
        i++;
    }
}

void sleepdial(){

}
