#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::fstream;
using std::ofstream;
using std::ifstream;
using std::ios;

#include "character.h"
#include "banya.h"
#include "enemy.h"
#include "room.h"
#include "guard.h"
#include "mage.h"
#include "dragon.h"
#include "funBattles.h"
#include "mecanic.h"
#include "saveandload.h"
#include "fungame.h"
#include "funterminal.h"

int main(){
    //Creating Banya
    Banya banya;

    //Variables to mecanics
    int op=0;
    /*
    int op=0, option=0, move=0, menu=0, lose=0;
    banya.setdamage(1000);
    */

    //Starting game
    while (op!=1 && op!=2 && op!=4){
    opening(op);
    switch (op){
        case 1:

        break;
        case 2:

        break;
        case 3:
        seehelp();
        pause();
        clc();
        break;
        case 4:
        cout<<"You left the game"<<endl;
        cout<<"Comeback soon"<<endl;
        break;
    }
    }
    return 0;
}