#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character{
    protected:
    Enemy();
    Enemy(string);

    public:
    virtual ~Enemy(){}
    virtual int atack()=0;
    virtual int atack2()=0;
    virtual int atack3()=0;
};

#endif