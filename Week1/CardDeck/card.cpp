
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

int card::numC; //Static variable to track the iterations of the deck


void card::initCard()
    {  //Takes in an array card type, and populates it with all the
        int num1=0;//Declaring the intial Deck
        numC=0;
        
        for(int i=0;i<nSuit;i++) //Iterator Represents the suit
            for(int j=0;j<nRank;j++) //Iterator Represents the rank of the card
            {
               
                num[num1].valS = suit(i);  // call out the Deck card identifier
                num[num1].valR = rank(j); // call out the Rank card identifier
                num1++; //Increment the next on the array
            }

    }


void card::shuffleCard(){  //Takes in an array to do a one shuffle
     sCard tnums[cSize]; //Declaring the temp Deck of size 52, this is done as a security measure
    numC=numC+1;
    for(int num1=0;num1<hcSize;num1++) //Start Populating the deck at the stage , Part 1
    {
        tnums[num1+num1] = num[num1]; // The card intialization based on the odd numbers,
        
    }   //index = positon + postion , 0 = 0 + 0  ,   2 = 1 + 1
    
    int ins=1; //Start the initial at 1 position for the second half of the elements to fill
    for(int num1=hcSize;num1<cSize;num1++) // Part 2 of the deck, starts off where the midway point of the deck is
    {
        
        tnums[ins] = num[num1];  // The card intialization based on the even numbers
        ins=ins+2; //every odd element.
        
    }
    for(int tnum=0;tnum<cSize;tnum++) //Iterates the temporary container to the original array of suit and rank
    {
        num[tnum]=tnums[tnum]; // Assigns the temporary array into the permenent nums array to be referenced
    }
    
    
}

void card::equal(card num1){
    
    cout<<"Comparing the Decks"<<endl;
    bool equal=false;
    for(int tnum=0;tnum<cSize-1;tnum++)    //Iterates all the elements in the card to print out one by one
    {
        
        int n = num[tnum].valS;
        int r = num[tnum].valR;
        
        int n1 = num1.num[tnum].valS;
        int r1 = num1.num[tnum].valR;
        
        if (n==n1){
            if(r==r1)
            {
                equal=true;  //Card must match
            }
            else{
                equal=false;  //Card does not math
            }
        }
    } //end the deck and gives the if statement a result
    if (equal==true){
        cout<<"------------------------"<<endl;
        cout<<"The Card Deck is a Match"<<endl;
        cout<<"------------------------"<<endl;
    }
    else{
        cout<<"--------------------------"<<endl;
        cout<<"The Card Deck is NOT Match"<<endl;
        cout<<"--------------------------"<<endl;
    }
    
    }

void card::shuffleUI(card myDeck2){
    
    int n;
    do{
        cout<<"Do you want keep shuffling ? (1 to continue / 0 to quit / try to Match the Deck '99') " << endl;
        cin>>n;
        if (n!=0){
            shuffleCard(); //User calls the shuffle the first time
            printDeck(); //Prints the first shuffle
            equal(myDeck2); //User calls to check if the first shuffl matched
            
            
                if ( n == 99)
                {
                    
                    do
                    {
                        cout<<"The Iteration : "<<numC<<endl;
                        shuffleCard();
                        printDeck();
                        equal(myDeck2);
                    }while((numC%8)!=0);
                    
                }
               else
                for (int i=0;i<n-1;i++)
                {
                    cout<<"The Iteration : "<<i+1+1<<endl;
                    shuffleCard();
                    printDeck();
                    equal(myDeck2);
                    }

                }
        
        
    }while(n>0);

}


void card::printDeck(){   //Takes in an array to  print out all the elements
    cout<<"!------!Start of the Deck!------!"<<endl; //Banner Frame top
    
    for(int tnum=0;tnum<cSize;tnum++)    //Iterates all the elements in the card to print out one by one
    {
        cout<<"Card "<<tnum +1 << " ";  //For print notation for readability
        int n = num[tnum].valS;    //gets the value for the print out by looking for the value in Suite
        int r = num[tnum].valR; //gets the value for the print out by looking for the value in Rank
        
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


