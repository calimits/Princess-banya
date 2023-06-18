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

void story(){
    cout<<"A long time ago, in a kingdom far away, there existed"<<endl;
    cout<<"a king who condemned all of his daughters to stay in the castle forever."<<endl;
    cout<<"In his mind he did it to protected them, but without realizing it"<<endl;
    cout<<"he subjected them to a life of imrpisonment."<<endl;
    cout<<"Descendants thousands of years later still remained under the same punishment,"<<endl;
    cout<<"but, Princess Banya would not let them imprison her forever..."<<endl;
}