#include "funBattles.h"

#include <cstdlib>
#include <ctime>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void battle(Banya & banya, Enemy & enemy){
    srand(time(NULL));
    int option=0;
    int def=0;
    int atk;
    while(banya.getlife()>0 && enemy.getlife()>0){
        cout<<"It's your turn "<<endl;
        cout<<"Select: (1)Atack (2)Critic Atack (3)Defense (4)Charge Atack"<<endl;
        cin>>option;
        switch (option){
            case 1: 
            break;
            case 2: 
            break;
            case 3: 
            break;
            case 4: 
            break;
            default: 
            break;
        }
        cout<<"It's "<<enemy.getname()<<" turn "<<endl;
        option=rand()%3+1;
            switch (option){
            case 1: 
            break;
            case 2: 
            break;
            case 3: 
            break;
        }

    }
}