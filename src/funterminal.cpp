#include "funterminal.h"

#include <iostream>
using std::cout;
using std::endl;

void pause(){
    #ifdef _WIN32
        system("pause");
    #elif __linux__
    cout<<"Presiona enter para continuar"<<endl;
    cin.ignore();
    #elif __ANDROID__
        cout<<"Presiona enter para continuar"<<endl;
        getchar();
    #else 
         cout<<"No se reconoce la plataforma"<<endl;
    #endif
}

void clc(){
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}