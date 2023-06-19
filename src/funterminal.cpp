#include "funterminal.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void pause(){
    #ifdef _WIN32
        system("pause");
    #else 
        system("read -s -r -n 1");
    #endif
}

void clc(){
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}