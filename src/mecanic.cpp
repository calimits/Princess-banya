#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "mecanic.h"

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



