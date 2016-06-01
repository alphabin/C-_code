//============================================================================
// Name        : Assignmnet_1.cpp
// Author      : Chatura Ahangama
// Date        : 5/31/2016
// Copyright   : Do Not Steal Ma Code without asking ...Meow
// Description : Week 1 Saddleback C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main() {
	//Intiallize the random function
	srand (time(NULL));

	//Assign the data to the variables
	//output = min + (rand() % (int)(max - min + 1))
	int v1 = 100 +(rand() % 900);

	//First getting the individual int
	int v11 = v1 / 100 % 10;
	int v12 = v1 / 10 % 10;
	int v13 = v1 % 10;

     //Get the sum
    int sum = v11+v12+v13;

    //Tripple of the sum
    int sum3 = sum * sum * sum;


    //Reverse the digits
    int v2 = v1;
    int reverse=0;

     while(v2 != 0) {
           int remainder = v2%10;
           reverse = reverse*10 + remainder;
           v2/=10;
     }

	//Double the random numbers

	//Print the Prgoram Header and the random numbers
	cout << "This is the first Prgram Ex A \n" ;
	cout << "================================ \n" ;
	printf("The Random number %d \n",v1);
	printf ("Random Numbers are %d %d %d \n",v11,v12,v13);
    //Out put the the sum of the number
	printf ("The Sum of the random numbers are %d +  %d +  %d = %d \n",v11,v12,v13,sum);
    //Out put the triple of the sum
	cout << "The Triple of the number is " << sum3 << endl;
	//The reverse of the number is
	cout << "The Triple of the number is " << reverse << endl;



	cout << "This is the first Prgram Ex B \n" ;
	cout << "================================ \n" ;



	return 0;
}
