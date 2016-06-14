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

SoftArchitect::SoftArchitect() {  /*Deafult Constructor*/
	addName("Alex Arch");  //Calling addName member
	addId(88888);  //Calling addID member
	addPhone(8191234444); //Calling  addPhone member
	addAge(31);  //Calling addAge member
	addGender("M"); //Calling addGender member
	addTitle("Architect"); //Calling addTitle
	addSalary(323000); //Calling addSalary
	addDate(12,24,2009); //Calling addDate
	addDept(5434222); //Calling addDept
	addSupervisor("Big Boss"); //Calling addSupervisor
	addPercent(5); //Calling addPercent
	addyears(4); //Calling addyears

}

SoftArchitect::SoftArchitect(string nname,int nempID,long int nphoneNum,int nage,string ngender,string njTitle,long int nsalary,
        int day,int month,int year,long int ndeptNum,string nsuperName,int npercentL,int nyears) {

	addName(nname); //Calling addName member
	addId(nempID); //Calling addID member
	addPhone(nphoneNum); //Calling  addPhone member
	addAge(nage); //Calling addAge member
	addGender(ngender); // Calling addGender member
	addTitle(njTitle); //Calling addTitle
	addSalary(nsalary);  //Calling addSalary
	addDate(day,month,year); //Calling addDate
	addDept(ndeptNum); //Calling addDept
	addSupervisor(nsuperName);  //Calling addSupervisor
	addPercent(npercentL); //Calling addPercent
	addyears(nyears); //Calling addyears

}


void SoftArchitect::addyears(int inYears){
	 years=inYears;
}

void SoftArchitect::getyears()const{  //Print function hence the variable shouldnt be changed
	 cout<<years;
}

SoftArchitect::~SoftArchitect(){}


void SoftArchitect::print() const{
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


