//============================================================================
// Name        : Assignmnet_1.2.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style, Client Code
//============================================================================


#include "card.h" //We use as a variable type of card, just like a int or float
#include <iostream>
#include <string.h>


using namespace std;

int main()
{
   
    cout<<"|-------------|"<<endl; //Welcome Banner
    cout<<"|Deck of Cards|"<<endl;
    cout<<"|-------------|"<<endl;
    
    
    card myDeck1;
    card myDeck2;
   
    
   
    myDeck1.printDeck();//Array of 23 cards type
    
    
    //myDeck1.initCard(); //Not needed the constructor takes care of this but can be called
    //myDeck2.initCard(); //Not needed the constructor takes care of this but can be called
    //int n=2; //How many times for to shuffle
    //myDeck1.shuffleCard(n);
    myDeck1.shuffleCard();
    myDeck1.printDeck();
    myDeck1.equal(myDeck2);
    myDeck1.equal(myDeck1);

    
    
    return 0;

}

