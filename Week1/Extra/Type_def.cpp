//  This is an example to show how Enumrated types behave
//  Created by Chatura Ahangama on 5/31/16.



#include <iostream>

using namespace std;

//Used to associate an identifier with a type
//It can use this smake convention to change the values globally

typedef int SMALLINT;
typedef unsigned int LARGEINT;

int main()
{
    SMALLINT first= 100;
    LARGEINT second= 1000000000;
    
    cout<< "Small Type: " << first << endl;
    cout<< "Large Type: " << second << endl;


    return 0;
}
