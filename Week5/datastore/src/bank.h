/*
 * bank.h
 *
 *  Created on: Jun 28, 2016
 *      Author: CCahangama
 */

#ifndef BANK_H_
#define BANK_H_
#include "members.h"
#include <vector>
#include <iostream>

using namespace std;

class bank {

public:
	bank();
	virtual ~bank();

	vector <members> memlist;
	int index;

	void getInList(); //Goes to the standered input to populate the vector
	void printCustomers(); //Prints the customers

};

#endif /* BANK_H_ */
