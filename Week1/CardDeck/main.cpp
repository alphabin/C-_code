
#include "card.h"
#include <iostream>


using namespace std;

void initCard(card num[]);
void shuffleCard(card nums[]);
void printDeck(card tnums[]);


int main()
{
    
    card nums[52];
    initCard(nums); //Populates the cards intialization
    cout<<"|-------------|"<<endl;
    cout<<"|Start of Deck|"<<endl;
    cout<<"|-------------|"<<endl;
    printDeck(nums);
   
    
    //Back to normal loop
    for(int i=0;i<8;i++){
        cout<<"Iteration : "<<i+1<<endl;
        shuffleCard(nums);
        printDeck(nums);
    }
    
  
    
    
    return 0;

}

void initCard(card nums[52]){
    int num=0;
    //Declaring the intial Deck
    for(int i=0;i<4;i++) //Iterator Represents the suit
        for(int j=0;j<13;j++) //Iterator Represents the rank
        {
            //cout<<"Card "<<num +1 << " ";
            nums[num]=card(i,j); // call out the Deck and Rank to create a class called card
            //nums[num].getcard();//Prints out the card thrugh helper function, also serves as a test to check array
            num++; //Increment the next on the array
        }
}




void shuffleCard(card nums[52]){
    card tnums[52];
        //Declaring the temp Deck and adding the values
    for(int num1=0;num1<26;num1++)
    {
        tnums[num1+num1] = nums[num1];
        
    }
    int ins=1;
    for(int num1=26;num1<52;num1++)
    {
        
        tnums[ins] = nums[num1];
        ins=ins+2;
        
    }
    for(int tnum=0;tnum<52;tnum++)
    {
        nums[tnum]=tnums[tnum];
    }

   
}

void printDeck(card tnums[52]){
    cout<<"------33------"<<endl;
    for(int tnum=0;tnum<52;tnum++)
    {
        cout<<"Card "<<tnum +1 << " ";
        tnums[tnum].getcard();
        
    }
    cout<<"------33------"<<endl;
    
}









