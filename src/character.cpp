#include "character.h"
#include <string>
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

using std::string;

Character::Character(){
    const char* name2="Banya";
    strcpy(name,name2);
    this->life=100;
    this->power=50;
    this->level=1;
    this->damage=15;
}

Character::Character(string name1){
    setname(name1);
    this->life=100;
    this->power=50;
    this->level=1;
    this->damage=15;   
}

void Character::setname(string name1){
    int size=name1.size();
    const char *aux=name1.data();

    if (size>=15){
        strncpy(name,aux,14);
        name[15]='\0';
    } else if (size<15){
        strcpy(name,aux);
    }
}

void Character::setlife(int l){
    this->life=l;
}

void Character::setpower(int p){
    this->power=p;
}

void Character::setlevel(int l){
    this->level=l;
}

void Character::setdamage(int d){
    this->damage=d;
}

char* Character::getname(){
    return this->name;
}

int Character::getlife(){
    return this->life;
}

int Character::getpower(){
    return this->power;
}

int Character::getlevel(){
    return this->level;
}

int Character::getdamage(){
    return this->damage;
}

void Character::showcharacter(){
    cout<<"Name: "<<name<<endl;
    cout<<"Level: "<<level<<endl;
    cout<<"Life: "<<life<<endl;
    cout<<"Power: "<<power<<endl;
    cout<<"Damage:  "<<damage<<endl;
}
