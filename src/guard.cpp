#include "guard.h"

#include <iostream>
using std::cout;
using std::endl;

Guard::Guard() : Enemy(){}

int Guard::atack(){
    int d;
    d=this->getdamage() + rand()%10; 
    cout<<this->getname()<<" has attacked with the sword"<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Guard::atack2(){
    int d;
    d=this->getdamage() + rand()%5; 
    cout<<this->getname()<<" has attacked with the lance"<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Guard::atack3(){
    int d;
    d=this->getdamage();
    cout<<this->getname()<<" has attacked "<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

