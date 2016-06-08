
//============================================================================
// Name        : Assignmnet_1.2.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style
//============================================================================


#include <iostream>
#include "card.h"
#include <string.h>


using namespace std;

card::card(){
    initCard();
}



void card::initCard()
    {  //Takes in an array card type, and populates it with all the
        int num1=0;//Declaring the intial Deck
        
        
        for(int i=0;i<4;i++) //Iterator Represents the suit
            for(int j=0;j<13;j++) //Iterator Represents the rank of the card
            {
                //cout<<"Card "<<num +1 << " ";
                num[num1].valS = suit(i);
                num[num1].valR = rank(j); // call out the Deck and Rank to create a class called card
                //nums[num].getcard();//Prints out the card thrugh helper function, also serves as a test to check array
                num1++; //Increment the next on the array
            }

    }


void card::shuffleCard(){  //Takes in an array to do a one shuffle
     sCard tnums[52]; //Declaring the temp Deck of size 52, this is done as a security measure
    
    for(int num1=0;num1<26;num1++) //Start Populating the deck at the stage , Part 1
    {
        tnums[num1+num1] = num[num1]; // The card intialization based on the odd numbers
        
    }
    int ins=1;
    for(int num1=26;num1<52;num1++) // Part 2
    {
        
        tnums[ins] = num[num1];  // The card intialization based on the even numbers
        ins=ins+2;
        
    }
    for(int tnum=0;tnum<52;tnum++)
    {
        num[tnum]=tnums[tnum]; // Assigns the temporary array into the permenent nums array to be referenced
    }
    
    
}

void card::equal(card num1){
    cout<<"Comparing the Decks"<<endl;
   /* int c=memcmp(&num,&num1, sizeof(52));
    if ((c) == 0)
    {
        cout<<"Matched Deck"<<endl;
    }
    else
    {
        cout<<"NOT Matched Deck"<<endl;
    }
    */
    
    bool equal=false;
    for(int tnum=1;tnum<51;tnum++)    //Iterates all the elements in the card to print out one by one
    {
        
        int n = num[tnum].valS;
        int r = num[tnum].valR;
        
        int n1 = num1.num[tnum].valS;
        int r1 = num1.num[tnum].valR;
        
        if (n==n1)
            if(r==r1)
                equal=true;
        
    }
    if (equal==true)
        cout<<"The Card Deck is a Match"<<endl;
    else
        cout<<"The Card Deck is NOT Match"<<endl;
}



void card::printDeck(){   //Takes in an array to  print out all the elements
    cout<<"!------!Start of the Deck!------!"<<endl; //Banner Frame top
    
    for(int tnum=0;tnum<52;tnum++)    //Iterates all the elements in the card to print out one by one
    {
        cout<<"Card "<<tnum +1 << " ";  //For print notation for readability
        int n = num[tnum].valS;
        int r = num[tnum].valR;
        
        
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
    cout<<"!------!End of the Deck!------!"<<endl; //Banner Frame bottom
    
}


