#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "fungame.h"

void opening(int & op){
    op=0;
    cout<<"\t\t\"Princess Banya\""<<endl;
    cout<<"\t\t(1)New game"<<endl;
    cout<<"\t\t(2)Load game"<<endl;
    cout<<"\t\t(3)Help"<<endl;
    cout<<"\t\t(4)Leave"<<endl;
    cin>>op;
    while(op!=1 && op!=2 && op!=3 && op!=4){
        cout<<"Enter a valid option ";
        cin>>op;
    }
}