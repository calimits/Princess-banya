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
    Banya & setat(int);
    Banya & setsp1(int);
    Banya & setsp2(int);
    Banya & setfsp(int);
    bool getat();
    bool getsp1();
    bool getsp2();
    bool getfsp();

    private:
    bool at,sp1,sp2,fsp;
};

#endif