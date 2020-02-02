#include <stdio.h>
#include <stdlib.h>


void actionlist(){
    printf("\nWhat do you want to do?");
    int i = 1;
    while (actlib[i][0] != '\0'){
        printf("\n%d. %s", i, actlib[i]);
        i++;
    }
    
}