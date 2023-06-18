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
    cout<<"(1)See tasks (2)Move (3)Menu";
    cout<<endl;
    cin>>option;
    while(option!=1 && option!=2 && option!=3){
        cout<<"Enter a valid option "<<endl;
    cin>>option;
    }
}

void seetasks(){
    cout<<"You have to defeat the dragon. You may go now if your want,"<<endl;
    cout<<"but it's going to be hard. You can get stronger before that."<<endl;
    cout<<"Go to every room in the castle and find power."<<endl;
}

void move(int & move){
    cout<<"Choose destiny: (1)Library (2)Armor hall (3)Music hall (4)Fight dragon"<<endl;
    move=0;
    cin>>move;
    while(move!=1 && move!=2 && move!=3 && move!=4){
        cout<<"Enter a valid option"<<endl;
    cin>>move;
    }
}

void menu(int & menu){
    cout<<"Choose: (1)See help (2)Leave "<<endl;
    menu=0;
    cin>>menu;
    while(menu!=1 && menu!=2){
        cout<<"Enter a valid option"<<endl;
    cin>>menu;
    }
}

void seehelp(){
    cout<<"Controls:"<<endl;
    cout<<"Button (1), (2), (3), (4), (5), (6), (7) and (8) "<<endl;
    cout<<"Story: "<<endl;
    cout<<"This is a non lineal game, you can choose your path,"<<endl;
    cout<<"but, it's going to be easier or harder, so it's your choice."<<endl;
    cout<<"Banya needs to get stronger to leave the castle."<<endl;
    cout<<"Levels: "<<endl;
    cout<<"This game has for levels, every level has a reward, get them."<<endl;
    cout<<"To choose a level, select Move, and then select the level you want."<<endl;
    cout<<"Level 1, level 3, level 2 and Defeat dragon is the easier way "<<endl;
    cout<<"But, you can win the game just defeating the dragon"<<endl;

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
        cout<<"You defeated them all, and your reward is 50 points of power"<<endl;
        cout<<"You also recieve thunder spell, use it wisely"<<endl;
        banya.setsp2(1);
        banya.setpower(banya.getpower()+50);
    }

    
    for(int i=0; i<4; i++){
        delete enemies[i];
    }
    

}


void level_armor(Banya & banya, int *progress, int lose){
    cout<<"You're in the Armor hall"<<endl;
    cout<<"There are 7 enemies to defeat"<<endl;
    cout<<"Prepare to fight"<<endl;
    pause();
    clc();
    //Creating dinamic enemies
    Enemy *enemies[7];
    for(int i=0; i<7; i++){
        enemies[i]=new Guard;
    }

    enemies[0]->setlevel(4).setdamage(17);
    enemies[1]->setlevel(3).setdamage(13);
    enemies[2]->setlevel(6).setdamage(11);
    enemies[3]->setlevel(5).setdamage(15);
    enemies[4]->setlevel(8).setdamage(20);
    enemies[5]->setlevel(9).setdamage(23);
    enemies[6]->setlevel(10).setdamage(25);

    bool result;
    int cont=0;
    for(int i=0;i<7;i++){
        result=battle(banya, *(enemies[i]));
        if (!result){
            lose=1;
            break;
        } else {
            cout<<"Congratulations, keep fighting"<<endl;
            cont++;
        }
    }
    if (cont==7){
        progress[2]=1;
        cout<<"You defeated them all, and your reward is 20 points of damage"<<endl;
        cout<<"You also recieve thunder spell, use it wisely"<<endl;
        banya.setfsp(1);
        banya.setdamage(banya.getdamage()+20);
    }

    for(int i=0; i<7; i++){
        delete enemies[i];
    }
}

void level_music(Banya & banya, int *progress, int lose){
    cout<<"You're in the Music hall"<<endl;
    cout<<"There are 5 enemies to defeat"<<endl;
    cout<<"Prepare to fight"<<endl;
    pause();
    clc();
    //Creating dinamic enemies
    Enemy *enemies[5];
    for(int i=0; i<2; i++){
        enemies[i]=new Mage;
    }

    for(int i=3; i<4; i++){
        enemies[i]=new Guard;
    }

    enemies[0]->setlevel(4).setdamage(10);
    enemies[1]->setlevel(3).setdamage(9);
    enemies[2]->setlevel(6).setdamage(13);
    enemies[3]->setlevel(7).setdamage(15);
    enemies[4]->setlevel(8).setdamage(20);

    bool result;
    int cont=0;
    for(int i=0;i<5;i++){
        result=battle(banya, *(enemies[i]));
        if (!result){
            lose=1;
            break;
        } else {
            cout<<"Congratulations, keep fighting"<<endl;
            cont++;
        }
    }
    if (cont==7){
        progress[2]=1;
        cout<<"You defeated them all, and your reward is 75 points of life"<<endl;
        cout<<"You also recieve fire spell, use it wisely"<<endl;
        banya.setsp1(1);
        banya.setlife(banya.getlife()+75);
    }

    for(int i=0; i<5; i++){
        delete enemies[i];
    }
}

void verify_evolve(Banya & banya){
    if (banya.getpoints()>=50)
        banya.evolve();
}



