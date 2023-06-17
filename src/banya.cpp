#include "banya.h"
#include <iostream>

#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

Banya::Banya() : Character(){
    this->at=0;
    this->sp1=0;
    this->sp2=0;
    this->fsp=0;

}

Banya::Banya(string name1) : Character(name1){
    this->at=0;
    this->sp1=0;
    this->sp2=0;
    this->fsp=0;
}

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

Banya & Banya::setat(int a){
    if (a==0 || a==1)
    this->at=a;
    else
    this->at=0;
    return *this;
}

Banya & Banya::setsp1(int a){
    if (a==0 || a==1)
    this->sp1=a;
    else
    this->sp1=0;
    return *this;
}

Banya & Banya::setsp2(int a){
    if (a==0 || a==1)
    this->sp2=a;
    else
    this->sp2=0;
    return *this;
}

Banya & Banya::setfsp(int a){
    if (a==0 || a==1)
    this->fsp=a;
    else
    this->fsp=0;
    return *this;
}

bool Banya::getat(){
    return this->at;
}

bool Banya::getsp1(){
    return this->sp1;
}

bool Banya::getsp2(){
    return this->sp2;
}

bool Banya::getfsp(){
    return this->fsp;
}