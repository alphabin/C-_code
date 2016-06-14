/*
 * SoftArchitect.h
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */

#ifndef SOFTARCHITECT_H_
#define SOFTARCHITECT_H_
#include "Programmer.h"
#include <iostream>

using namespace std;

class SoftArchitect:public Programmer{

public:
	SoftArchitect();  //Deafult Constructor
	SoftArchitect(string,int,long int, int,string,string,long int,int,int,int, long int,string,int,int); //Non-Deafult constructor
	virtual ~SoftArchitect();

	void addyears(int); // The the years to Soft architects
	void getyears() const;
	void print() const;
private:
	int years;  //Private to only the SoftArchitect
};

#endif /* SOFTARCHITECT_H_ */
