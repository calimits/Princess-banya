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


int main(){
    //Building the castle

    /*
    Room library, armor, music;
    library.setchest(1).setenemies(4).setname("Library");
    armor.setchest(2).setenemies(7).setname("Armor hall");
    music.setchest(1).setenemies(5).setname("Music hall");
    //Construidos
    */

    //Creating Banya
    Banya banya, banya2;
    banya.setname("Mil");
    int progress[4]={0,0,0,0};
    //Variables to mecanics
    /*
    int option=0, move=0, menu=0, progress[4]={0,0,0,0}, lose=0;
    banya.setdamage(1000);
    
    save(banya, progress);
    load(banya2, progress);
    banya2.showcharacter();
    */
    


    return 0;
}