#include "mage.h"

#include <iostream>
using std::cout;
using std::endl;

Mage::Mage() : Enemy(){
    this->setname("Dark Mage");
    this->setpower(0);
    this->setdamage(6);
}

int Mage::atack(){
    int d;
    d=this->getdamage()*4+10; 
    cout<<this->getname()<<" has attacked with fire spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    cout<<this->getname()<<"Fail the spell, and caused 0 damage"<<endl;
}

int Mage::atack2(){
    int d;
    d=this->getdamage()*4 + rand()%20; 
    cout<<this->getname()<<" has attacked with ice spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
}

int Mage::atack3(){
    int d;
    d=this->getdamage()*6 + rand()%10; 
    cout<<this->getname()<<" has attacked with dark spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
}