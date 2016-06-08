

//============================================================================
// Name        : Assignmnet_1.2.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style
//============================================================================


#ifndef CARD_H
#define CARD_H

class card{


public:
    card(); //constructor for the card to be intialized, deafult const
    void initCard(); //Local intilization function prototype
    void printDeck(); //Prints the deck
    void shuffleCard(); //Local shuffle deck function prototype
    void equal(card Deck2); //checks equality of two card types
    
private:
    enum suit{
        Hearts,  //0
        Spades,  //1
        Clubs,   //2
        Diamonds //3
    };
    
    enum rank{
        Ace,     //0
        Two,     //1
        Three,   //2
        Four,    //3
        Five,    //4
        Six,     //5
        Seven,   //6
        Eight,   //7
        Nine,    //8
        Ten,     //9
        Jack,    //10
        Queen,   //11
        King     //12
    };
    
    struct sCard{
        suit valS;
        rank valR;
        
    };
        
   
    sCard num[52]; //Declare the array of structure of sCard(single card)
    

   
};



#endif