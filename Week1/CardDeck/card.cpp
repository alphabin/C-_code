
//============================================================================
// Name        : Assignmnet_1.2.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style
//============================================================================


#include <iostream>
#include "card.h"


using namespace std;

card::card(){
    //cout << "Creating Deafult Card " << endl;
    valS = Hearts;
    valR = Ace;
    //getcard(valS,valR);
}


card::card(int n,int r){
    //cout << "Creating User Defined Card" << endl;
    valS = suit(n);
    valR = rank(r);
    
    //getcard(valS,valR);
}

//It internal helper for the print is the printer function
void card::getcard(suit n,rank r){
    
    if (n == 0)
        cout << "HEARTS";
    if (n == 1)
        cout << "SPADES";
    if (n == 2)
        cout << "CLUBS";
    if (n == 3)
        cout << "DIAMONDS";
    
    if (r == 0)
        cout << " ACE"<<endl;
    if (r == 1)
        cout << " TWO"<<endl;
    if (r == 2)
        cout << " THREE"<<endl;
    if (r == 3)
        cout << " FOUR"<<endl;
    if (r == 4)
        cout << " FIVE"<<endl;
    if (r == 5)
        cout << " SIX"<<endl;
    if (r == 6)
        cout << " SEVEN"<<endl;
    if (r == 7)
        cout << " EIGHT"<<endl;
    if (r == 8)
        cout << " NINE"<<endl;
    if (r == 9)
        cout << " TEN"<<endl;
    if (r == 10)
        cout << " JACK"<<endl;
    if (r == 11)
        cout << " QUEEN"<<endl;
    if (r == 12)
        cout << " KING"<<endl;

}

void card::getcard(){
    getcard(valS,valR);
    
}




