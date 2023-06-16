#include "mage.h"

#include <iostream>
using std::cout;
using std::endl;

Mage::Mage() : Enemy(){
    this->setname("Dark Mage");
    this->setpower(40);
    this->setdamage(6);
}

int Mage::atack(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2; 
    cout<<this->getname()<<" has attacked with fire spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<this->getname()<<"Fail the spell, and caused 0 damage"<<endl;
        return 0;
    }
}

int Mage::atack2(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2 + rand()%20; 
    cout<<this->getname()<<" has attacked with ice spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<this->getname()<<"Fail the spell, and caused 0 damage"<<endl;
        return 0;
    }
}

int Mage::atack3(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2 + rand()%10; 
    cout<<this->getname()<<" has attacked with dark spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<this->getname()<<"Fail the spell, and caused 0 damage"<<endl;
        return 0;
    }
}