#include "saveandload.h"
#include "banya.h"

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;
using std::ios;

void save(const Banya & banya, int *progress){
    //Saving Character
    ofstream saveb("saves/banya.dat", ios::out | ios::binary);
    saveb.seekp(0);
    saveb.write(reinterpret_cast<const char*>(&banya), sizeof(Banya));

    //Saving game progress
    ofstream savep("saves/progress.dat", ios::out);
    savep.seekp(0);
    for(int i=0; i<4; i++){
        savep<<progress[i];

    if (!saveb || !savep)
    cout<<"Uncorrect save"<<endl;

    }
}

void load(Banya & banya, int *progress){
    //Load character
    ifstream loadb("saves/banya.dat", ios::in | ios::binary);
    loadb.seekg(0);
    loadb.read(reinterpret_cast<char *>(&banya), sizeof(Banya));

    //load game progress
    ifstream loadp("saves/progress.dat", ios::in);
    loadp.seekg(0);
    for(int i=0; i<4; i++){
        loadp>>progress[i];
    }

    if (!loadb || !loadp)
    cout<<"Uncorrect load"<<endl;

}