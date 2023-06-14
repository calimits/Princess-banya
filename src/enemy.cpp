#include "enemy.h"
#include <iostream>

using std::cout;
using std::endl;

Enemy::Enemy() : Character(){
    this->setname("Castle Guard");
    this->setpower(0);
    this->setpoints(0);
    this->setdamage(25);
}
    
Enemy::Enemy(string name1) : Character(name1){
    this->setname(name1);
    this->setpower(0);
    this->setpoints(0);
    this->setdamage(25);
}

int Enemy::atack(){
    int d;
    d=this->getdamage() + rand()%10; 
    cout<<this->getname()<<" has attacked with the sword"<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Enemy::atack2(){
    int d;
    d=this->getdamage() + rand()%5; 
    cout<<this->getname()<<" has attacked with a stick"<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Enemy::atack3(){
    int d;
    d=this->getdamage() + rand()%10; 
    cout<<this->getname()<<" has attacked "<<endl;
    cout<<"Damage -"<<d<<endl;
    return d;
}

int Enemy::spell1(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2; 
    cout<<this->getname()<<" has attacked with fire spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}
    
int Enemy::spell2(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2 + rand()%20; 
    cout<<this->getname()<<" has attacked with ice spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}
    
int Enemy::spell3(){
    int d;
    if (this->getpower()>=25){
    d=this->getdamage()*2 + rand()%10; 
    cout<<this->getname()<<" has attacked with dark spell"<<endl;
    cout<<"Damage -"<<d<<endl;
    this->setpower(this->getpower()-25);
    return d;
    } else {
        cout<<"You didn't notice, you didn't have power enough, and caused 0 damage"<<endl;
        return 0;
    }
}