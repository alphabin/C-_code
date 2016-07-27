/*
 * bank.cpp
 *
 *  Created on: Jun 28, 2016
 *      Author: CCahangama
 */

#include "bank.h"
#include "members.h"
#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

bank::bank() {
	// TODO Auto-generated constructor stub
	index = 0;
	memlist.resize(40);

}

bank::~bank() {
	// TODO Auto-generated destructor stub
}


void bank::getInList() {
	// TODO Auto-generated destructor stub


	ifstream memfile("./warehouse_shoppers.txt");
	   if (memfile.is_open())
    	 {
		   string line;
		   while ( getline (memfile,line) )
		   {



      	//tname="Donald";
    	   memlist[0].name=line;


   		//cout<<"Custome Name:" << memlist[0].name<<endl;
		/*	cin>>tdate;
			memlist[index].date=tdate;

			cin>>ttype;
			memlist[index].type=ttype;

			cin>>tid;
			memlist[index].id=tid;

			index++;

    	*/
			//i++;

		   }
}

void bank::printCustomers() {



		  cout<<"Custome Name:"<<endl;
		  cout<< memlist[0].name;


}




