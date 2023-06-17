#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "mecanic.h"
#include "funterminal.h"
#include "funBattles.h"
#include "banya.h"
#include "enemy.h"
#include "guard.h"
#include "mage.h"

void select(int & option){
    option=0;
    cout<<"(1)See tasks (2)Move (3)Menu"<<endl;
    while(option!=1 && option!=2 && option!=3){
        cout<<"Enter a valid option"<<endl;
    cin>>option;
    }
}

void seetasks(){
    cout<<"You have to defeat the dragon. You may go now if your want,"<<endl;
    cout<<"but it's going to be hard. You can get stronger before that."<<endl;
    cout<<"Go to every room in the castle and find power."<<endl;
}

void move(int & move){
    cout<<"Choose destiny: (1)Library (2)Armor hall (3)Music hall (4)Your room"<<endl;
    move=0;
    while(move!=1 && move!=2 && move!=3 && move!=4){
        cout<<"Enter a valid option"<<endl;
    cin>>move;
    }
}

void menu(int & menu){
    cout<<"Choose destiny: (1)See help (2)Leave "<<endl;
    menu=0;
    while(menu!=1 && menu!=2){
        cout<<"Enter a valid option"<<endl;
    cin>>menu;
    }
}

void seehelp(){
    //Rellenar
}

void level_library(Banya & banya, int *progress, int lose){
    cout<<"You're in the Library"<<endl;
    cout<<"There are 4 enemies to defeat"<<endl;
    cout<<"Prepare to fight"<<endl;
    pause();
    clc();
    //Creating dinamic enemies
    Enemy *enemies[4];
    for(int i=0; i<4; i++){
        enemies[i]=new Mage;
    }

    enemies[0]->setlevel(4).setdamage(10);
    enemies[1]->setlevel(3).setdamage(9);
    enemies[2]->setlevel(1);
    enemies[3]->setlevel(5).setdamage(12);


    bool result;
    int cont=0;
    for(int i=3;i>=0;i--){
        result=battle(banya, *(enemies[i]));
        if (!result){
            lose=1;
            break;
        } else {
            cout<<"Congratulations, keep fighting"<<endl;
            cont++;
        }
    }
    if (cont==4){
        progress[0]=1;
        cout<<"You defeated them all, and your reward is 20 points of damage"<<endl;
        banya.setdamage(banya.getdamage()+20);
    }

    for(int i=0; i<4; i++){
        delete enemies[i];
    }

}

/*
void level_armor(Banya & banya, int *progress, int lose){

}

void level_music(Banya & banya, int *progress, int lose){

}
*/


