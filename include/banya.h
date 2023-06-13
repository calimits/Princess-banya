#ifndef BANYA_H
#define BANYA_H

#include "character.h"

class Banya : public Character{
    public:
    Banya();
    Banya(string);
    int atack();
    int spell1();
    int spell2();
    int finalspell();
    void evolve();
};

#endif