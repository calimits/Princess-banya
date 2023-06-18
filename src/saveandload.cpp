#include "saveandload.h"
#include "banya.h"

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;
using std::ios;

void save(const Banya & banya){
    //Saving Character
    ofstream saveb("saves/banya.dat", ios::out | ios::binary);
    saveb.seekp(0);
    saveb.write(reinterpret_cast<const char*>(&banya), sizeof(Banya));

    if (!saveb)
    cout<<"Uncorrect save"<<endl;
}


void load(Banya & banya){
    //Load character
    ifstream loadb("saves/banya.dat", ios::in | ios::binary);
    loadb.seekg(0);
    loadb.read(reinterpret_cast<char *>(&banya), sizeof(Banya));

    if (!loadb)
    cout<<"Uncorrect load"<<endl;
}