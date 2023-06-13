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
    void setpoints(int);
    void setdamage(int);
    const char* getname() const;
    int getlife() const;
    int getpower() const;
    int getlevel() const;
    int getpoints() const;
    int getdamage() const;
    void showcharacter();


    private:
    char name[15];
    int life;
    int power;
    int level;
    int damage;
    int points;
};

#endif