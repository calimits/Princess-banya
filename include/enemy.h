#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character{
    public:
    Enemy();
    Enemy(string)
    int atack();
    int atack2();
    int atack3();
    int spell1();
    int spell2();
    int spell3();
};

#endif