#ifndef CARD_H
#define CARD_H
#define CSIZE 52




class card
{
public:
    card(); //constructor for the card to be intialized
    card(int,int);
    void getcard();
    
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
    
    void getcard(suit,rank);// make one card depending on the array
    suit valS;
    rank valR;

    

   
};



#endif