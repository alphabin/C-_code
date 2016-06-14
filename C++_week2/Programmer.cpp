/*
 * Programmer.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: CCahangama
 */
#include "Employee.h"
#include "Programmer.h"
#include <iostream>
#include <iomanip>

using namespace std;

Programmer::Programmer(){
	// Loading with defaults
	addName("Sam Software");
	addId(54321);
	addPhone(8191234567);
	addAge(21);
	addGender("M");
	addTitle("Programer");
	addSalary(223000);
	addDate(12,24,2014);
	addDept(5432122);
	addSupervisor("Joe Boss");
	addPercent(4);
	cProgram("YES");
	jProgram("NO");

}

Programmer::Programmer(string nname,int nempID,long int nphoneNum,int nage,string ngender,string njTitle,long int nsalary,
		              int day,int month,int year,long int ndeptNum,string nsuperName,int npercentL, string ncPProgram,string jPProgram ){
		//Loading the user constructed values
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
		cProgram(ncPProgram);
		jProgram(jPProgram);


}


void Programmer::addDept(long int ndeptNum){deptNum=ndeptNum;}   //Simple assigning of deptNumn
void Programmer::addSupervisor(string nsuperName){superName=nsuperName;} //Simple assigning of nsuperName
void Programmer::addPercent(int npercentL){percentL=npercentL;} //Simple assignment of addPercent
void Programmer::cProgram(string ncProgram){cPProgram=ncProgram;} // simple assignment of programmer C++
void Programmer::jProgram(string njProgram){jPProgram=njProgram;}  // simple assignment of programmer Java


void Programmer::getDept() const{cout<<deptNum;}  //Accessor function to print Dept
void Programmer::getSupervisor() const{cout<<superName;} //Accessor function to print Supervisor
void Programmer::getPercent() const{cout<<left<<percentL;} //Accessor function to print Percent
void Programmer::getcProgram() const{cout<<cPProgram;} //Accessor function to print C++
void Programmer::getjProgram() const {cout<<jPProgram;} //Accessor function to print Java

void Programmer::print() const{ /*Print function*/

	Employee::print();
    cout<<endl;
	cout<<"\t\t"<<left<<"Department"<<left<<"\tSupervisor"<<left <<"\tRaise"<<left<< "\tC++" <<left<<"\tJava " <<endl;
	getName();

	cout<<"\t";
	getDept();
	cout<<"\t\t";
	getSupervisor();
	cout<<"\t ";
    getPercent();
    cout<<"\t ";
	getcProgram();
	cout<<"\t ";
	getjProgram();
	cout<<endl;


	cout<<endl;
}



Programmer::~Programmer() {

}



