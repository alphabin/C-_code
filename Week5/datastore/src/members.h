/*
 * members.h
 *
 *  Created on: Jun 28, 2016
 *      Author: CCahangama
 */

#ifndef MEMBERS_H_
#define MEMBERS_H_
#include <vector>
#include <iostream>
#include "items.h"

using namespace std;

class members{

public:
	members();
	virtual ~members();

	string name;
	string date;
	string type;
	int id;

	vector<items> itemlist; //Creates the list that will hold all the items




};

#endif /* MEMBERS_H_ */
