#include "banya.h"
#include <iostream>

#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

Banya::Banya() : Character(){}

Banya::Banya(string name1) : Character(name1){}

int Banya::atack(){
    int d;
    d=this->getdamage() + rand()%10; 
    cout<<this->getname()<<" has attacked"<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Banya::spell1(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2 + rand()%10; 
    cout<<this->getname()<<" has attacked with fire spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}

int Banya::spell2(){
    int d;
    if (this->getpower()>=35){
    d=this->getdamage()*3 + rand()%10; 
    cout<<this->getname()<<" has attacked with thunder spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-35);
    return d;
     } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}

int Banya::finalspell(){
    int d;
    if (this->getpower()>=65){
    d=this->getdamage()*5 + rand()%10; 
    cout<<this->getname()<<" has attacked with light spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-65);
    return d;
     } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}

void Banya::evolve(){
    this->setpoints(0);
    cout<<"Banya has reached level "<<this->getlevel()<<endl;
    this->setlife(this->getlife()+10);
    this->setpower(this->getpower()+3);
    this->setdamage(this->getdamage()+3);
    this->setlevel(this->getlevel()+1);
    cout<<endl;
}