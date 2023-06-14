#ifndef ROOM_H
#define ROOM_H

#include <string>
using std::string;

class Room{
    public:
    Room();
    Room(string);
    Room& setname(string);
    Room& setchest(int);
    Room& setenemies(int);
    Room& setplace(string);
    Room& setplace2(string);
    Room& setplace3(string);  
    const char* getname() const;
    int getchest() const;
    int getenemies() const;
    const char* getplace() const;
    const char* getplace2() const;
    const char* getplace3() const;
    void showroom();

    private:
    char name[20];
    int chest;
    int enemies;
    char place[20];
    char place2[20];
    char place3[20];
};

#endif