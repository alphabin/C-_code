/*
 * queue
 *
 *  Created on: Jul 7, 2016
 *      Author: CCahangama
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>

using namespace std;

template<class Type>  //Creating a  template class
class queue {

public:
	queue();
	bool enqueue(const Type & items); //Inserts an element at the end of the queue
	bool dequeue(); //Removes and returns the element at the front of the queue
	Type front(); //Returns the element at the front without removing it
	int size(); //Returns the number of elements stored
	bool isEmpty(); //Indicates whether no elements are stored
	bool isFull(); //Indicates whether queue is full
	void print(); //Print function for the class
	queue(const queue & object);
private:
	enum {
		MAX = 10
	}; //Setting enum to hold the MAX as the value.
	Type *items; //Setting up an array of Type.
	int head;  //Front element
	int tail;  //Back element
	int itemCount; //Increments the iterator

};

template<class Type>
queue<Type>::queue() {
	head = -1;  //Assigns a null
	tail = -1;  //Assigns a null
	itemCount = 0; //Count is zero
	items = new Type[MAX]; //The max of the item

}

template<class Type>
queue<Type>::queue(const queue & object) {

	head = object.head;  //Front element
	tail = object.tail;  //Back element
	itemCount = object.itemCount;
	items = new Type[MAX]; //The max of the item

	for (int i = head; i < itemCount; i++) {
		items[i] = object.items[i];

	}
	cout << "Copy Constructor is Called" << endl;
}

template<class Type>
bool queue<Type>::enqueue(const Type & itemIn) {   //add to the tail
	if (MAX == itemCount)
		throw 99;

	if (this->isFull() == true)  //False is list is full
		return false;
	else if (this->isEmpty() == true)  //If list is emtpy run this case
			{
		head = 0;  //The head of the index queue
		tail = 0;	//The tail of the index queue
		items[tail] = itemIn; //The tail  equals the item
		itemCount++;
		return true;

	}

	else if (tail < MAX)  //If the list is below the MAX index
			{
		tail++;  //Increase the tail count
		items[tail] = itemIn; //
		itemCount++;
		return true;
	} else
		return false;

}

template<class Type>
bool queue<Type>::dequeue()   //Pops the head
{

	if (this->isEmpty() == true) { //check to see if its not empty, in that case it fails

		throw "Division by zero condition!";
		return false;
	} else if (head == tail)  //at the first index of 0 = 0
			{

		head = -1;
		tail = -1;
		itemCount--;

	} else   //normal valid senerio
	{
		head = head + 1;
		itemCount--;
		cout << "After removing the of the front, now the front holds : "
				<< front() << endl;
		return true;

	}

}

template<class Type>
Type queue<Type>::front() //return the front variable for list
{
	if (this->isEmpty() == true) { //In the case the front does not have anything or empty
		cout << "Empty Queue" << endl;
		return 0;
	} else {
		return items[head];

	}

}

template<class Type>
int queue<Type>::size()  //Return the size
{
	if (tail >= 0) //for all valid other cases
		return itemCount;
	else
		return 0; //return 0 for invalid size
}

template<class Type>
bool queue<Type>::isEmpty()   //Return the if the list is empty
{
	if (head == -1 && tail == -1) {  // checks if it still at the null output
		return true;
	} else
		return false;      //if not assume it is not empty

}

template<class Type> //Checks the max to see if it is indeed the correct variable
bool queue<Type>::isFull() {
	if (itemCount == MAX) { //this means we have reached the limit in this array
		return true;
	} else
		return false;

}

template<class Type>
void queue<Type>::print() //Simple template class print item that is here to make life much easiers
{
	cout << "Current Queue : [";
	if (this->isEmpty() == false) {
		for (int i = head; i <= tail; i++) //All cases of the valid list
				{

			cout << this->items[i] << " ";
		}
	} else
		cout << " Nothing to prnt,now the List is Empty "; //Else will print out it is empty

	cout << "]" << endl;
}

#endif /* QUEUE_H_ */
