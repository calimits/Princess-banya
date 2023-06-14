#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "character.h"
#include "banya.h"
#include "enemy.h"

int main(){
    Enemy lead;
    cout<<lead.atack()<<endl;
    cout<<lead.spell1()<<endl;

    return 0;
}