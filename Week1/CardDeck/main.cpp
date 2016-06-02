
#include "card.h"
#include <iostream>


using namespace std;


int main()
{
    //card(0,1);
    //card(1,1);
    
    int num=1;
    card nums[52]; //Declaring the intial Deck
    for(int i=0;i<4;i++)
        for(int j=0;j<13;j++)
        {
            cout<<"Card "<<num<< " ";
            nums[num]=card(i,j);
            nums[num].getcard();
            num++;
        }
   
    
   
 
    
    int inc=1;
    
    card tnums[52]; //Declaring the temp Deck
    
    for(int num1=2;num1<51;num1+=2)
    {
           tnums[num1] = nums[num1];
        
    }
    
    int inc1=26;
    for(int num1=0;num1<51;num1+=2)
    {
        tnums[num1+1] = nums[inc1];
        inc1++;
    }
  /*  for(num2;num2>=26;num2++)
    {
        if (num2==51)
            tnums[51]=nums[51];
        
        if ((num2<51) && (26 <=num2))
            tnums[num2] = nums[num2-inc2];
            inc2=inc2+1;
    }
    */
    
    
    cout<<"Sorted"<<endl;
    
    for(int tnum=0;tnum<51;tnum++)
        {
            cout<<"Card "<<tnum +1 << " ";
            tnums[tnum].getcard();
            
        }
    
    
    
    return 0;

}




