#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "character.h"

int main(){
    Character lead;
    lead.showcharacter();
    lead.setname("wawa");
    lead.setlevel(99);
    lead.setpower(100);
    cout<<endl;
    lead.showcharacter();

    return 0;
}