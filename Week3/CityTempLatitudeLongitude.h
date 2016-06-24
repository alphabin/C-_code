/*
 * cityTempExtend.h
 *
 *  Created on: Feb 24, 2016
 *      Author: jjkath
 */

#ifndef CITYTEMPEXTEND_H_
#define CITYTEMPEXTEND_H_

#include <iostream>
using namespace std;

#include "cityTemp.h"

class CityTempLatitudeLongitude : public cityTemp
{
private:

	// data members

	float latitude[NUMBER_ROWS];
	float longitude[NUMBER_ROWS];

public:
    friend ostream & operator <<(ostream &,const CityTempLatitudeLongitude &);
	// constructors

    //friend checkEqual(const cityTemp &,const CityTempLatitudeLongitude &);
	CityTempLatitudeLongitude() : cityTemp()
	{
		for (int i=0;i < NUMBER_ROWS;i++)
		{
			latitude[i] = 0.0;
			longitude[i] = 0.0;
		}
	}

	CityTempLatitudeLongitude(float latIn[], float longIn[], string namesIn[], int tempsIn[][NUMBER_COLS]) : cityTemp(namesIn, tempsIn)
	{
		for (int i=0;i < NUMBER_ROWS;i++)
		{
			latitude[i] = latIn[i];
			longitude[i] = longIn[i];
		}
	}

	// member functions

	void Print() const
	{
		cityTemp::Print();

		cout << endl;

		for (int i=0;i < NUMBER_ROWS;i++)
		{
			cout << "City Latitude: " << latitude[i] << endl;
			cout << "City Longitude: " << longitude[i] << endl;
		}
	}



};

ostream & operator <<(ostream & out,const CityTempLatitudeLongitude & inSet){
	   out<<"This is the overloaded outPut Biatch"<<endl;
	   inSet.Print();
	   return out;

}


#endif /* CITYTEMPEXTEND_H_ */










