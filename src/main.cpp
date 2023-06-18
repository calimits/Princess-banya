#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::fstream;
using std::ofstream;
using std::ifstream;
using std::ios;

#include "character.h"
#include "banya.h"
#include "enemy.h"
#include "guard.h"
#include "mage.h"
#include "dragon.h"
#include "funBattles.h"
#include "mecanic.h"
#include "saveandload.h"
#include "fungame.h"
#include "funterminal.h"

int main(){
    //Creating Banya
    Banya banya;
    Dragon dragon;
    banya.setdamage(1000);

    //Variables to mecanics
    
    int op=0, option=0, mov=0, men=0, lose=0,final=2;
    

    //Starting game
    while (op!=4){
    opening(op);
    switch (op){
        case 1:
            clc();
            story();
            pause();
            clc();
            seehelp();
            pause();
            clc();
            seetasks();
            pause();
            clc();
        while(lose!=1){
            select(option);
            switch (option){
                case 1:
                seetasks();
                pause();
                clc();
                break;
                case 2:
                move(mov);
                if (mov==1){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    level_library(banya, lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==2){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    level_armor(banya, lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==3){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    save(banya);
                    level_music(banya,lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==4){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    cout<<"Good luck fighting the dragon"<<endl;
                    final=battle(banya, dragon);
                    if (final==1){
                        cout<<"You defeated the dragon. Banya is finally free"<<endl;
                        cout<<"The end"<<endl;
                        pause();
                        clc();
                        lose=1;
                    } else if (final==0){
                        lose=1;
                    }
                }
                break;
                case 3:
                menu(men);
                if (men==1){
                    seehelp();
                } else if (men==2){
                    lose=1;
                }
                pause();
                clc();
                break;
            }
        }
        break;
        case 2:
        //**************************************

        while(lose!=1){
            for(int i=0;i<10;i++){
                    load(banya);
                    }
            cout<<"Loading..."<<endl;
            pause();
            clc();
            select(option);
            switch (option){
                case 1:
                seetasks();
                pause();
                clc();
                break;
                case 2:
                move(mov);
                if (mov==1){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    level_library(banya, lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==2){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    level_armor(banya, lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==3){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    save(banya);
                    level_music(banya,lose);
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                } else if (mov==4){
                    for(int i=0;i<10;i++){
                    save(banya);
                    }
                    cout<<"Saving..."<<endl;
                    pause();
                    clc();
                    cout<<"Good luck fighting the dragon"<<endl;
                    final=battle(banya, dragon);
                    if (final==1){
                        cout<<"You defeated the dragon. Banya is finally free"<<endl;
                        cout<<"The end"<<endl;
                        pause();
                        clc();
                        lose=1;
                    } else if (final==0){
                        cout<<"You lost"<<endl;
                        lose=1;
                    }
                }
                break;
                case 3:
                menu(men);
                if (men==1){
                    seehelp();
                } else if (men==2){
                    lose=1;
                }
                pause();
                clc();
                break;
            }
        }

        //****************************************
        break;
        case 3:
        seehelp();
        pause();
        clc();
        break;
        case 4:
        cout<<"You left the game"<<endl;
        cout<<"Comeback soon"<<endl;
        break;
    }
    lose=0;
    }
    return 0;
}