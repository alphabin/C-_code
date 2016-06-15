/*
 * Main.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: Chatura ahangama
 *      Assignment 3
 */


#include "Employee.h"
#include "Programmer.h"
#include "SoftArchitect.h"
#include <string>
#include <iostream>



using namespace std;

void dataTest(Employee &,Programmer &);

int main()
{

  Employee Jimmy;  //Employee with the deafault constructor
  Programmer Sam; //Programmer with the default constructor

  dataTest(Jimmy,Sam); //Check function to test all the conditions in Assignmnet 4

};



//Test function that modifies the input of each class type, the order is important
void dataTest(Employee & Jimmy,Programmer & Sam ){
	 cout <<"\n\nPrinting the Initial Cases" <<endl;
	  //Populating the data for the Employees
	  Jimmy.print();   //Printing the results of 'normal' deafult constructor

	  //Populating the data for the Programmers
	  Sam.print(); // Print Programmer default construct

	  //False Case Check
	  cout <<"\n\nChecking the truth Equality from member function the initial Cases" <<endl;
	  checkNum(Jimmy,Sam); //Calling the member function to check


	  cout <<"\n Checking the truth Equality from overloading the initial Cases" <<endl;
	  if (Jimmy == Sam) //Check by overloading
		  cout<<endl<<"\tTrue by Overload Checking"<<endl;
	  else
		  cout<<endl<<"\tFalse by Overloading"<<endl;

	  cout <<"\nAdding the same number to from member function the initial Cases 18188181111" <<endl;
	  //True Case
	  Jimmy.addPhone(18188181111); //Assign the same number
	  Jimmy.print();
	  Sam.addPhone(18188181111);  //Assign the same number
	  Sam.print();

	  cout <<"\n\nChecking the truth Equality from member function the initial Cases" <<endl;
	  //True Case Check
	   checkNum(Jimmy,Sam); //Calling the member function to check

	   cout <<"\n\nChecking the truth Equality from member function the initial Cases" <<endl;
	   if (Jimmy == Sam) //Check by overloading
	 	  cout<<endl<<"\tTrue by Overload Checking"<<endl;
	   else
	 	  cout<<endl<<"\tFalse by Overload Checking"<<endl;


	  cout <<"\n\nAdding years to age using the addIntAge member cases" <<endl;
	  Jimmy.addIntAge(3); //Add 3 to Jimmys Age
	  Jimmy.print();


	  cout <<"\n\nAdding years to age using the + operator member cases" <<endl;
	  Jimmy=Jimmy+15; //Add 15 to Jimmys Age
	  Jimmy.print();


	  cout<< "\n\nTo Directly Print out using the cout << operator" <<endl;
	  cout<<Jimmy;

	  cout<< "\n\nTo Directly Take in values using the cin >> operator" <<endl;
	  Employee tests;
	  cin>>tests;
	  tests.print();

}
