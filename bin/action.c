#include <stdlib.h>
#include <stdio.h>
#include "stats.h"
/* Remember, the struct order is:
    name
    actionIndex
    health
    hygiene
    happiness
    money
    social
*/
struct stats player = {
    "player",
    0,
    100,
    100,
    100,
    1000,
    100,
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