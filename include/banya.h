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
    Banya & setat();
    Banya & setsp1();
    Banya & setsp2();
    Banya & setfsp();
    bool getat();
    bool getsp1();
    bool getsp2();
    bool getfsp();

    private:
    bool at,sp1,sp2,fsp;
};

#endif