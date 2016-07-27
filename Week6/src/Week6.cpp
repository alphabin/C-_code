//============================================================================
// Name        : Week6.cpp
// Author      : Chatura Ahangama
// Version     : 1.0.2
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "queue.h"
#include <assert.h>
#define startup 1//This will indicate from our stack the program is intialized with space preprocessor

using namespace std;
bool test();
int main() {
	bool reachend = 0;
	//If it falils to intialize then I know it has not been set
	assert(startup);//Checks the assert to see a 1 has been set to indicate stack allocation, indicates fist check for start

	cout << "Running Initial test" << endl;
	//assert(test()); //Testing the test clauses, by Assert Value,

	cout << "\nnRunning Copy test" << endl;
	//testing copy constructor
	queue<int> a;
	queue<int> b;
	cout << "Printing A" << endl;
	a.enqueue(123);
	a.enqueue(1223);
	a.print();

	b = a;

	cout << "Printing B , After B=A" << endl;
	b.print();

	cout << "Adding to A" << endl;
	a.enqueue(9999);
	cout << "Printing A" << endl;
	a.print();
	cout << "Printing B" << endl;
	b.print();

	reachend = 1;

	try {
		queue<int> size1;
		size1.enqueue(123);
		int j = 1;
		do {
			size1.dequeue();
			j--;
		} while (j >= -1);
	} catch (const char* ms) {
		cout << "\nDELETING Zeroth MEMORY, Attemping recovery" << endl;

	}

	try {
		//MAX SIZE = 10, we put 10 digits
		queue<int> size;
		int i = 0;
		do {
			size.enqueue(i);
			i++;
		} while (i <= 10);

	} catch (int num) {

		cout << "\nEXCEEDING MEMORY, Attemping recovery" << endl;

	}

	assert(reachend);
	return 0;
}

bool test() {
	int asserVal = 0;

	cout << "!!!\t\t\tCustom Queue Software!!!" << endl; // prints !!!Banner!!!

	queue<int> listInt;  //Type int
	queue<double> listDouble; //Type double
	queue<string> listString; //Type string

	cout << "Adding Int elements to test" << endl;
	//Add to Que
	int j = 0;
	do {
		listInt.enqueue(j);
		cout << endl;
		cout << "Size Of The Que is :" << listInt.size() << endl; //Prints the size of the Que.
		cout << "Is it full ?"
				<< (listInt.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listInt.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Current Queue : [";
		listInt.print();
		j++;

		asserVal = 1;
	} while (j < 10);

	//Prints from Que

	cout << "The front of the list holds : " << listInt.front() << endl; //Element at the front
	//Acessing the front element

	cout << endl;
	int i = 0;

	do {
		cout << endl;
		i++;
		listInt.dequeue();
		cout << "Is it full ?"
				<< (listInt.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listInt.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Current Queue : [";
		listInt.print();

	} while (i < 10);

	cout << "\n\nAdding Double to test" << endl;
	//Add to Que
	int k = 0;
	do {
		listDouble.enqueue(.10 + k);
		cout << endl;
		cout << "Size Of The Que is :" << listDouble.size() << endl; //Prints the size of the Que.
		cout << "The front of the list holds : " << listDouble.front() << endl; //Element at the front
		cout << "Is it full ?"
				<< (listDouble.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listDouble.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Current Queue : [";
		listDouble.print();

		k++;
	} while (k < 10);

	//Prints from Que

	//Acessing the front element
	cout << endl;
	int l = 0;

	do {
		cout << endl;
		l++;
		listDouble.dequeue();
		cout << "Is it full ?"
				<< (listDouble.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listDouble.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Current Queue : [";
		listDouble.print();

	} while (l < 10);

	cout << "\n\nAdding Strings to test" << endl;
	//Add to Que
	int m = 0;
	do {
		listString.enqueue("SummerTimeBillyRabit" + m);
		cout << endl;
		cout << "Size Of The Que is :" << listString.size() << endl; //Prints the size of the Que.
		cout << "The front of the list holds : " << listString.front() << endl; //Element at the front
		cout << "Is it full ?"
				<< (listString.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listString.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		listString.print();
		asserVal = 1;

		m++;
	} while (m < 10);

	//Acessing the front element
	cout << endl;
	int v = 0;

	do {
		cout << endl;
		v++;
		listString.dequeue();
		cout << "Is it full ?"
				<< (listString.isFull() == true ?
						cout << " True " : cout << " False ") << endl;
		cout << "Is it empty ?"
				<< (listString.isEmpty() == true ?
						cout << " True " : cout << " False ") << endl;
		listString.print();
		asserVal = 1;

	} while (v < 10);

	return asserVal;

}
