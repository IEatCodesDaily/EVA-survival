#include <stdlib.h>
#include <stdio.h>
#include "stats.h"
/* Remember, the struct order is:
    name >> for action will be filled with the action dialogue
    actionIndex
    health
    hygiene
    happiness
    money
    social
*/
char actlib[3][50] = {
    "player",
    "sleep",
    "eat",
};

struct stats player = {
    "player",
    0,
    100,
    100,
    100,
    1000,
    100
};

struct stats sleep = {
    "sleep",//name
    1,      //actionIndex
    10,     //Health
    0,      //Hygiene
    0,      //Happiness
    5,      //Money
    -10     //Social
};

struct stats eat = {
    "eat",
    2,
    15,
    5,
    10,
    -100,
    0
};

