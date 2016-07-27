//============================================================================
// Name        : Week8.cpp
// Author      : Chatura Ahangama
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "!!!BAD CODE : Week8 !!!" << endl; // prints !!!Buffer Overflows : Week8 !!!

	/**********************************************************************************************
							Buffer Overflow ERROR

	**********************************************************************************************/
	char input[8];
	char output[9];
	cout << output << endl;

	printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n"); //Printing the current pointer
	printf("Address of output = %p\n", output);
	printf("Address of input = %p\n", input);

	cout << "Enter Digit (8) to buffer : " << endl;
	cin >> input;
	strcpy (output,input); // memory can be overwritten

	cout << output << endl;
	printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n");
	printf("Address of 1 = %p\n", input);


	/**********************************************************************************************
							Buffer Overflow ERROR FIX

	***********************************************************************************************/


	cout << "Enter Digit (8) to buffer :  " << endl;
	cin >> input;
	strncpy (output,input,8);// The char limits up to 8
	output[8]='\0';

	cout << output << endl;
	printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n");
	printf("Address of 1 = %p\n", input);

	/**********************************************************************************************
						      HEAP ERROR, Pointers try to access the deleted elements

	**********************************************************************************************/
	char* charArray;
	int* numberOfCells ;
	cout << "Created dynamic Array" << endl;
	numberOfCells = new int;
	cout << "Combination of Mums and Chars" << endl;
	cin >> *numberOfCells;
	charArray = new char[*numberOfCells];
	strcpy (charArray, "Sending New World");
	cout << "Number of memory locations allocated was " << *numberOfCells << endl;
	cout << charArray << endl;
	delete numberOfCells;
	delete [ ] charArray;


	// memory was released but still accessed....
	cout << "Number of memory location allocated was " << *numberOfCells << endl;
	cout << charArray << endl;



	/**********************************************************************************************
						      OUT OF BOUNDS FIX ERROR

	**********************************************************************************************/


	cout<< "Enter the --No Boundary Check !! !!" <<endl;



    int intArray[3];
	int index;
	for (index=0;index <= 3;index++) // THe problem here is index starts at 0,1,2,3 = size 4
	{
	cout << "Please enter an integer: ";
	cin >> intArray[index];
	cout << "The integer just entered was " << intArray[index] << endl; ;
	}

    cout<< "Enter the --Boundary Check !! !!" <<endl;
	for (index=0;index < 3;index++) // corrected it should only acess up to 3
	{
	cout << "Please enter an integer: ";
	cin >> intArray[index];
	cout << "The integer just entered was " << intArray[index] << endl; ;
	}

	return 0;
}


