#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "character.h"
#include "banya.h"
#include "enemy.h"

int main(){
    Enemy lead;
    lead.setname("Perra").setlevel(99).setlife(10000);
    lead.showcharacter();

    return 0;
}