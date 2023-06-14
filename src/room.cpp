#include "room.h"

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Room::Room(){
    this->setname("Castle room");
    this->setplace("Back");
    this->setplace2("Right corner");
    this->setplace3("Floor");
    this->chest=1;
    this->enemies=3;
}

Room::Room(string name1){
    this->setname(name1);
    this->setplace("Back");
    this->setplace2("Right corner");
    this->setplace3("Floor");
    this->chest=1;
    this->enemies=3;
}

Room& Room::setname(string name1){
    int size=name1.size();
    const char *aux=name1.data();

    if (size>=20){
        strncpy(name,aux,19);
        name[20]='\0';
    } else if (size<20){
        strcpy(name,aux);
    }
    return *this;  
}

Room& Room::setchest(int c){
    this->chest=c;
    return *this;
}

Room& Room::setenemies(int e){
    this->enemies=e;
    return *this;
}

Room& Room::setplace(string place1){
    int size=place1.size();
    const char *aux=place1.data();

    if (size>=20){
        strncpy(place,aux,19);
        place[20]='\0';
    } else if (size<20){
        strcpy(place,aux);
    }
    return *this; 
}

Room& Room::setplace2(string place){
    int size=place.size();
    const char *aux=place.data();

    if (size>=20){
        strncpy(place2,aux,19);
        place2[20]='\0';
    } else if (size<20){
        strcpy(place2,aux);
    }
    return *this; 
}

Room& Room::setplace3(string place){
    int size=place.size();
    const char *aux=place.data();

    if (size>=20){
        strncpy(place3,aux,19);
        place3[20]='\0';
    } else if (size<20){
        strcpy(place3,aux);
    }
    return *this; 
}

const char* Room::getname() const{
    return this->name;
}

int Room::getchest() const{
    return this->chest;
}

int Room::getenemies() const{
    return this->enemies;
}

const char* Room::getplace() const{
    return this->place;
}

const char* Room::getplace2() const{
    return this->place2;
}

const char* Room::getplace3() const{
    return this->place3;
}

void Room::showroom(){
    cout<<"Room name: "<<name<<endl;
    cout<<"Room places: "<<place<<", "<<place2<<", "<<place3<<endl;
    cout<<"Chests: "<<chest<<endl;
    cout<<"Enemies: "<<enemies<<endl;
}







