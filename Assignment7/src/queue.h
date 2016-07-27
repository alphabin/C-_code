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

#endif /* QUEUE_H_ */
