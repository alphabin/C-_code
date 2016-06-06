

//============================================================================
// Name        : Assignmnet_1.2.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style, Client Code
//============================================================================


#include "card.h"   //We use as a variable type of card, just like a int or float
#include <iostream>


using namespace std;


void initCard(card num[]);//Local intilization function prototype
void shuffleCard(card nums[]); //Local shuffle deck function prototype
void printDeck(card tnums[]); //Local print deck fucntion prototype
void cheatDeck(card nums[],int ); //Local cheat to match shuffle



int main()
{
   
    cout<<"|-------------|"<<endl; //Welcome Banner
    cout<<"|Start of Deck|"<<endl;
    cout<<"|-------------|"<<endl;
    
    
    
    const int ncards=52; //Defines the card deck size
    card nums[ncards]; //Array of 23 cards type
    initCard(nums); //Populates the cards,the whole array of 52 elements meet intialization
    printDeck(nums); //Prints the Deck
    
    int x=8; //Mutations for the card deck, Magic number
    cheatDeck(nums,x); //This cheats the shuffle and makes the deck go back to its original format
    
    
    return 0;

}




void initCard(card nums[52]){  //Takes in an array card type, and populates it with all the
    int num=0;//Declaring the intial Deck
    for(int i=0;i<4;i++) //Iterator Represents the suit
        for(int j=0;j<13;j++) //Iterator Represents the rank of the card
        {
            //cout<<"Card "<<num +1 << " ";
            nums[num]=card(i,j); // call out the Deck and Rank to create a class called card
            //nums[num].getcard();//Prints out the card thrugh helper function, also serves as a test to check array
            num++; //Increment the next on the array
        }
}




void shuffleCard(card nums[52]){  //Takes in an array to do a one shuffle
    card tnums[52]; //Declaring the temp Deck of size 52, this is done as a security measure
    
    for(int num1=0;num1<26;num1++) //Start Populating the deck at the stage , Part 1
    {
        tnums[num1+num1] = nums[num1]; // The card intialization based on the odd numbers
        
    }
    int ins=1;
    for(int num1=26;num1<52;num1++) // Part 2
    {
        
        tnums[ins] = nums[num1];  // The card intialization based on the even numbers
        ins=ins+2;
        
    }
    for(int tnum=0;tnum<52;tnum++)
    {
        nums[tnum]=tnums[tnum]; // Assigns the temporary array into the permenent nums array to be referenced
    }

   
}

void printDeck(card tnums[52]){   //Takes in an array to  print out all the elements
    cout<<"33------33------33"<<endl; //Banner Frame top
    
    for(int tnum=0;tnum<52;tnum++)    //Iterates all the elements in the card to print out one by one
    {
        cout<<"Card "<<tnum +1 << " ";  //For print notation for readability
        tnums[tnum].getcard();   //Prints through the
        
    }
    cout<<"33------33------33"<<endl; //Banner Frame bottom
    
}


void cheatDeck(card nums[52],int x){
    
    //Back to normal loop, based on the user defined X it will mutate the split
    for(int i=0;i<x;i++){
        cout<<"Iteration : "<<i+1<<endl;
        shuffleCard(nums);
        printDeck(nums);
    }

}






