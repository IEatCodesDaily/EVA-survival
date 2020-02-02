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
    time
*/
char actlib[25][50] = {
    "Action List",
    "sleep",
    "eat",
    "wash",
    "work -- Volunteer",
    "     -- Cashier",
    "     -- Factory",
    "     -- Volunteer",
    "play -- Spinner",
    "     -- Rubik Cube",
    "     -- RC Car",
    "chat",
    "buy  -- Spinner",
    "     -- Rubik Cube",
    "     -- RC Car"
};



struct stats player = {
    "Player",   //name
    0,          //actionIndex
    100,        //Health
    100,        //Happiness
    100,        //Hygiene
    100,        //Social
    10,         //Money
    0           //Time
};

struct stats sleep = {
    "Sleep",//name
    1,      //actionIndex
    10,     //Health
    5,      //Happiness
    -5,     //Hygiene
    -10,    //Social
    0,      //Money
    8       //Time
};

struct stats eat = {
    "Eat",
    2,
    15,
    5,
    -10,
    10,
    -5,
    2
};

struct stats wash = {
    "Wash",
    3,
    0,
    5,
    19,
    0,
    0,
    3
};

struct stats spin = {
    "Spinner",
    4,
    0,
    5,
    0,
    0,
    0,
    1
};
struct stats rubik = {
    "Rubik Cube",
    5,
    0,
    10,
    0,
    0,
    0,
    2
};
struct stats car = {
    "Spinner",
    6,
    0,
    20,
    0,
    0,
    0,
    4
};
struct stats chat = {
    "Chat",   //name
    7,          //actionIndex
    0,        //Health
    0,        //Happiness
    0,        //Hygiene
    10,        //Social
    0,         //Money
    1           //Time
};
struct stats buySpin = {
    "Buy Spinner",   //name
    0,          //actionIndex
    0,        //Health
    0,        //Happiness
    0,        //Hygiene
    0,        //Social
    -25,         //Money
    0           //Time
};
struct stats buyRubik = {
    "Buy Rubik Cube",   //name
    0,          //actionIndex
    0,        //Health
    0,        //Happiness
    0,        //Hygiene
    0,        //Social
    -75,         //Money
    0           //Time
};
struct stats buyCar = {
    "Buy RC Car",   //name
    0,          //actionIndex
    0,        //Health
    0,        //Happiness
    0,        //Hygiene
    0,        //Social
    -140,         //Money
    0           //Time
};
//Work list

char worklib[10][50] = {
    "Job list",
    "Volunteer work",
    "Work as a cashier",
    "Work at a factory",
    "Clean the street"
};

int salary[50] = {
    0,
    0,
    5,
    20,
    3
};

int worktime[50] = {
    0,
    2,
    4,
    8,
    2
};

struct work volunteer = {
    "Volunteer work",
    1,
    -5,
    10,
    -10,
    15,
    0,
    2
};

struct work cashier = {
    "Cashier",
    2,
    0,
    0,
    0,
    -5,
    5,
    4
};

struct work factory = {
    "Factory work",
    3,
    -15,
    -5,
    -10,
    -10,
    20,
    8
};

struct work streetclean = {
    "Street cleaner",
    4,
    0,
    5,
    15,
    5,
    2,
    3
};
