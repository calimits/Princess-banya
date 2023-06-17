#include "funBattles.h"

#include <cstdlib>
#include <ctime>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void battle(Banya & banya, Enemy & enemy){
    srand(time(NULL));
    int option=0;
    int def=0;
    int atk=0;
    int damage=0;
    int critic=0;
    int out=0;
    while(banya.getlife()>0 && enemy.getlife()>0 && out==0){
        banya.showstats1();
        cout<<"It's your turn "<<endl;
        cout<<"Select: (1)Atack (2)Critic Atack (3)Charge Atack (4)Defense ";
        if (banya.getsp1()){
            cout<<"(5)Fire spell ";
        } 
        if (banya.getsp2()){
            cout<<"(6)Thunder spell ";
        } 
        if (banya.getfsp()){
            cout<<"(7)Light spell ";
        } 
        cout<<"(8)Leave"<<endl;
        cin>>option;
        switch (option){
            case 1:
            damage=banya.atack();
            enemy.setlife(enemy.getlife()-damage+atk);
            banya.showstats1();
            atk=0;
            break;
            case 2:
            critic=rand()%10+1;
            damage=banya.atack();
            if (critic==1 || critic==2){
            enemy.setlife(enemy.getlife()*5-damage+atk);
            banya.showstats1();
            } else {
                enemy.setlife(enemy.getlife()*5-damage+atk);
                banya.showstats1();
            }
            atk=0;
            break;
            case 3: 
            atk=atk+25;
            break;
            case 4:
            def=def+6;
            break;
            case 5: 
            damage=banya.spell1();
            enemy.setlife(enemy.getlife()-damage);
            banya.showstats1();
            break;
            case 6: 
            damage=banya.spell2();
            enemy.setlife(enemy.getlife()-damage);
            banya.showstats1();
            break;
            case 7: 
            damage=banya.finalspell();
            enemy.setlife(enemy.getlife()-damage);
            banya.showstats1();
            break;
            case 8:
            cout<<"Banya has abandoned the battle "<<endl;
            out=1;
            break;
            default: 
            break;
        }
        cout<<"It's "<<enemy.getname()<<" turn "<<endl;
        option=rand()%3+1;
            switch (option){
            case 1: 
            damage=enemy.atack();
            banya.setlife(banya.getlife()-damage);
            banya.showstats();
            break;
            case 2: 
            damage=enemy.atack2();
            banya.setlife(banya.getlife()-damage);
            banya.showstats();
            break;
            case 3: 
            damage=enemy.atack3();
            banya.setlife(banya.getlife()-damage);
            banya.showstats();
            break;
        }

    }
}