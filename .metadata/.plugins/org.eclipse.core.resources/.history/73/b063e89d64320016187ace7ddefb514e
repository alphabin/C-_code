/*
 * SoftArchitect.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */

#include "SoftArchitect.h"
#include "Programmer.h"
#include <iostream>

using namespace std;

SoftArchitect::SoftArchitect() {
	// TODO Auto-generated constructor stub
	addName("Soft Test");
	addId(12345);
	addPhone(12345678);
	addAge(99);
	addGender("F");
	addTitle("Tester");
	addSalary(100000);
	addDate(2,2,2);
	addDept(13213);
	addSupervisor("Lind Tester");
	addPercent(23);
	addyears(99);

}

SoftArchitect::SoftArchitect(string nname,int nempID,long int nphoneNum,int nage,string ngender,string njTitle,long int nsalary,
        int day,int month,int year,long int ndeptNum,string nsuperName,int npercentL,int nyears) {
	// TODO Auto-generated destructor stub
	addName(nname);
	addId(nempID);
	addPhone(nphoneNum);
	addAge(nage);
	addGender(ngender);
	addTitle(njTitle);
	addSalary(nsalary);
	addDate(day,month,year);
	addDept(ndeptNum);
	addSupervisor(nsuperName);
	addPercent(npercentL);
	addyears(nyears);
}


void SoftArchitect::addyears(int inYears){
	 years=inYears;
}

void SoftArchitect::getyears(){
	 cout<<years;
}

SoftArchitect::~SoftArchitect(){}


void SoftArchitect::print(){
    Employee::print();
	cout<<"\t\t"<<"Department \t Supervisor \t Raise \t Years of Experience " <<endl;
	getName();
	cout<<"\t";
	getDept();
	cout<<"\t\t";
	getSupervisor();
	cout<<"\t ";
	getPercent();
	cout<<"\t\t";
	getyears();


}


