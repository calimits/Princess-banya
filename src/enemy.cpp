#include "enemy.h"


Enemy::Enemy() : Character(){
    this->setname("Castle Guard");
    this->setpower(0);
    this->setpoints(0);
    this->setdamage(10);
}
    
Enemy::Enemy(string name1) : Character(name1){
    this->setname(name1);
    this->setpower(0);
    this->setpoints(0);
    this->setdamage(25);
}

