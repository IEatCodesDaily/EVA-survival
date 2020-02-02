#include <stdio.h>
#include <stdlib.h>


void actionlist(){
    printf("\n\nWhat should i do?");
    int i = 1;
    while (actlib[i][0] != '\0'){
        printf("\n%d. %s", i, actlib[i]);
        i++;
    }
    
}

void joblist(){
    printf("\n\nWhat job should i take?");
    int i = 1;
    while (worklib[i][0] != '\0'){
        printf("\n%d. %s\t\t\t\tSalary : $%d\tDuration : %d hour(s)", i, worklib[i], salary[i], worktime[i]);
        i++;
    }
}

void actdial(struct stats *act){

}

void workdial(struct work *work){

}