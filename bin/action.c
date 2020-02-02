#include <stdlib.h>
#include <stdio.h>
#include "stats.h"
/* Remember, the struct order is:
    name >> for action will be filled with the action dialogue
    actionIndex
    health
    happiness
    hygiene
    social
    money
*/
char actlib[3][50] = {
    "player",
    "sleep",
    "eat",
};

struct stats player = {
    "Player",
    0,
    100,
    100,
    100,
    100,
    10
};

struct stats sleep = {
    "Sleep",//name
    1,      //actionIndex
    10,     //Health
    5,      //Happiness
    -5,     //Hygiene
    -10,    //Social
    0       //Money
};

struct stats eat = {
    "Eat",
    2,
    15,
    5,
    -10,
    10,
    -5
};

struct stats wash = {
    "Wash",
    3,
    0,
    5,
    19,
    0,
    0
};