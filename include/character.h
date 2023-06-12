#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string;

//We decided to have the constructors public, 'cause we decided
//to not have character as an abstract class

class Character{
    public:
    Character();
    Character(string);
    void setname(string);
    void setlife(int);
    void setpower(int);
    void setlevel(int);
    void setdamage(int);
    char* getname();
    int getlife();
    int getpower();
    int getlevel();
    int getdamage();
    void showcharacter();

    private:
    char name[15];
    int life;
    int power;
    int level;
    int damage;
};

#endif