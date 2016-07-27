//============================================================================
// Name        : Week7.cpp
// Author      : Chatura Ahangama
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
  	1.	What is the STL?
  		-Standard Template Library
  		What is a vector?
  		-It is a resizeable array and STL container
	2.	Which vector operations change the size of a vector after its construction?
		-vector::resize()
	3.	What is the STL array container and how does it differ from the built-in array and from a vector?
		-Array is container just like a vector but differes in that it is fixed in size
	4.	How does the vector member function resize() differ from reserve()?
		-Reserve to effect the capacity and Resize effect the size
	5.	What should begin() and end() do for a container?
	    -begin() return the iterator to the begining and end() are examples of iterator that holds the end of the list,
	6.	Give an example of using the vector push_back() modifier.
 	 	-variable.push_back(item);
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<int>Lotto(int,int);
void print(const vector<int>);
int myrandom (int i) { return std::rand()%i;}

int main() {

	srand (unsigned( time(NULL) )); //Seeding the clock
	vector <int> winning;
    int a;
    int b;
    int c=0;
	do{
    cout<<"\nCard Range :";
    cin>>a;
    cout<<"\nGuesses :";
    cin>>b;

	winning=Lotto(a,b);
	for(int i=0;i<b;i++)
		cout<<winning[i]<<" ";
	}while(c<5);

	return 0;
}

vector<int>Lotto(int range,int guesses){

     vector<int> temp; //Holds the values for the user defined list
     vector<int> rtemp;
     for (int i=0; i<range; ++i) temp.push_back(i+1);

     random_shuffle(temp.begin(),temp.end(),myrandom);

     for (int i=0; i<range; ++i)
    	 rtemp.push_back(temp[i]);

    return rtemp;
}


