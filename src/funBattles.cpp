#include "funBattles.h"
#include "funterminal.h"
#include "mecanic.h"

#include <cstdlib>
#include <ctime>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool battle(Banya & banya, Enemy & enemy){
    srand(time(NULL));
    Banya aux=banya;
    int option=0;
    int def=0;
    int atk=0;
    int damage=0;
    int critic=0;
    int points=0;
    while(banya.getlife()>0 && enemy.getlife()>0){
        banya.showstats();
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
        cin>>option;
        switch (option){
            case 1:
            damage=banya.atack();
            enemy.setlife(enemy.getlife()-damage+atk);
            atk=0;
            break;
            case 2:
            critic=rand()%10+1;
            damage=banya.atack();
            if (critic==1 || critic==2){
            enemy.setlife(enemy.getlife()*5-damage+atk);
            } else {
                enemy.setlife(enemy.getlife()*5-damage+atk);
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
            break;
            case 6: 
            damage=banya.spell2();
            enemy.setlife(enemy.getlife()-damage);
            break;
            case 7: 
            damage=banya.finalspell();
            enemy.setlife(enemy.getlife()-damage);
            break;
            default: 
            cout<<"You fail this turn"<<endl;
            break;
        }
        pause();
        clc();
        banya.showstats();
        if (enemy.getlife()>0){
        cout<<"It's "<<enemy.getname()<<" turn "<<endl;
        option=rand()%3+1;
            switch (option){
            case 1: 
            damage=enemy.atack();
            banya.setlife(banya.getlife()-damage);
            break;
            case 2: 
            damage=enemy.atack2();
            banya.setlife(banya.getlife()-damage);
            break;
            case 3: 
            damage=enemy.atack3();
            banya.setlife(banya.getlife()-damage);
            break;
        }
        } else {
            cout<<endl;
            cout<<enemy.getname()<<" defeated"<<endl;
            pause();
            clc();
        }
    }
    if (banya.getlife()<=0){
        cout<<"You lost"<<endl;
        return 0;
    } else if (enemy.getlife()<=0){
        cout<<"You won"<<endl;
        points=enemy.getlevel()*10;
        banya=aux;
        banya.setpoints(banya.getpoints()+points);
        cout<<"Your earned "<<points<<" points of experience "<<endl;
        verify_evolve(banya);
        return 1;
    }
    return 1;
}