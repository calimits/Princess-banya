#include "dragon.h"

#include <iostream>
using std::cout;
using std::endl;

Dragon::Dragon() : Enemy(){
    this->setname("Dragon");
    this->setpower(0);
    this->setdamage(30);
    this->setlife(450);
}

int Dragon::atack(){
    int d;
    d=this->getdamage()*2; 
    cout<<this->getname()<<" has attacked with ball fire "<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Dragon::atack2(){
    int d;
    d=this->getdamage()*3+15; 
    cout<<this->getname()<<" has attacked with raging blaze "<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Dragon::atack3(){
    int d;
    d=this->getdamage()*6; 
    cout<<this->getname()<<" has attacked with killer blue fire "<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}