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
    this->life=200;
    this->power=60;
    this->level=1;
    this->damage=15;
    this->points=0;
}

Character::Character(string name1){
    setname(name1);
    this->life=100;
    this->power=50;
    this->level=1;
    this->points=0;   
    this->damage=15;
}

Character& Character::setname(string name1){
    int size=name1.size();
    const char *aux=name1.data();

    if (size>=15){
        strncpy(name,aux,14);
        name[15]='\0';
    } else if (size<15){
        strcpy(name,aux);
    }
    return *this;
}

Character& Character::setlife(int l){
    this->life=l;
    return *this;
}

Character& Character::setpower(int p){
    this->power=p;
    return *this;
}

Character& Character::setlevel(int l){
    this->level=l;
    return *this;
}

Character& Character::setpoints(int d){
    this->points=d;
    return *this;
}

const char* Character::getname() const{
    return this->name;
}

int Character::getlife() const{
    return this->life;
}

int Character::getpower() const{
    return this->power;
}

int Character::getlevel() const{
    return this->level;
}

int Character::getpoints() const{
    return this->points;
}

void Character::showcharacter(){
    cout<<"Name: "<<name<<endl;
    cout<<"Level: "<<level<<endl;
    cout<<"Life: "<<life<<endl;
    cout<<"Power: "<<power<<endl;
    cout<<"Damage: "<<damage<<endl;
    cout<<"Points:  "<<points<<endl;
}

void Character::showstats(){
    cout<<"Name: "<<name<<"\t\t"<<"Level: "<<level<<endl;
    cout<<"Life: "<<life<<"\t\t"<<"Power: "<<power<<endl;
}

void Character::showstats1(){
    cout<<"Name: "<<name<<"\t\t"<<"Level: "<<level<<endl;
}

Character& Character::setdamage(int d){
    this->damage=d;
    return *this;
}

int Character::getdamage() const{
    return this->damage;
}

