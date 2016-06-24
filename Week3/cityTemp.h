/*
 * cityTemp.h
 *
 *  Created on: Jun 16, 2016
 *      Author: CCahangama
 */
#ifndef CITYTEMP_H_
#define CITYTEMP_H_

#include "cityTempExtend.h"

#include <iostream>
using namespace std;

const int NUMBER_ROWS = 5;
const int NUMBER_COLS = 12;

class cityTemp
{
private:

	// data members

	string names[NUMBER_ROWS];
	int temperatures[NUMBER_ROWS][NUMBER_COLS];

public:

	// constructors


	cityTemp()
	{
		for (int i=0;i < NUMBER_ROWS;i++)
		{
			names[i].clear();
			for (int j=0;j < NUMBER_COLS;j++)
			{
				temperatures[i][j] = 0;
			}
		}
	}

	cityTemp(string namesIn[], int tempsIn[][NUMBER_COLS])
	{
		for (int i=0;i < NUMBER_ROWS;i++)
		{
			names[i] = namesIn[i];
			for (int j=0;j < NUMBER_COLS;j++)
			{
				temperatures[i][j] = tempsIn[i][j];
			}
		}
	}

	// member functions
	cityTemp operator+(const int num){

	        cityTemp temp;
	        for(int i=0;i<5;i++){
	        temp.names[i]=names[i];
	        		for( int j=0;j<12;j++)
	        			temp.temperatures[i][j]=temperatures[i][j]+num;
	        }
			return temp;
		}


	void Print() const
	{
		for (int i=0;i < NUMBER_ROWS;i++)
		{
			cout << "City Name: " << names[i] << endl;

			cout << "City Temperatures: ";
			for (int j=0;j < NUMBER_COLS;j++)
			{
				cout << temperatures[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}



};



#endif /* CITYTEMP_H_ */
