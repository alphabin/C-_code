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
    card myDeck2;//Going to be the reference
    myDeck1.printDeck();//Prints the intial Array of 23 cards type
    myDeck1.shuffleUI(myDeck2);//Enters the User interface for Easier portability
    
    
    return 0;

}

