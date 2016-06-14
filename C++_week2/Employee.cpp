/*
 * Employee.cpp
 *
 *  Created on: Jun 8, 2016
 *      Author: Chatura ahangama
 */

#include "Employee.h"
#include "Date.h"
#include "Programmer.h"
#include <iostream>
#include <iomanip>

using namespace std;

Employee::Employee() {
	// TODO Auto-generated constructor stub;

	string nname="Test Atest";
	int nempID=100001;
	long int nphoneNum=11111111;
	int nage=11;
	string ngender="F";
	string njTitle="Testing";
	long int nsalary=10000;
	int a=1;
	int b=11;
	int c=1970;
	name=nname;
	empID=nempID;
	phoneNum=nphoneNum;
	age=nage;
	gender=ngender;
	jTitle=njTitle;
	salary=nsalary;
	hiredate=Date(a,b,c);

}

Employee::Employee(string nname,int nempID,long int nphoneNum,int nage,string ngender,string njTitle,long int nsalary,int a,int b,int c) {
	// TODO Auto-generated constructor stub
	 name=nname;
	 empID=nempID;
	 phoneNum=nphoneNum;
	 age=nage;
	 gender=ngender;
	 jTitle=njTitle;
	 salary=nsalary;
	 hiredate=Date(a,b,c);

}

void Employee::addName(string nname){
	  name=nname;

}

void Employee::getName(){
	  cout<<left<<name;

}


void Employee::addId(int nempID){
	empID=nempID;

}

void Employee::getId(){
	cout<<left<<empID;

}

void Employee::addPhone(long int  nphoneNum){
	 phoneNum=nphoneNum;



}
/*
void Employee::getPhone(){
	 cout<<left<<phoneNum;

}
*/

long int Employee::getPhone(){
	 return phoneNum;

}
void Employee::addAge(int nage){
	 age=nage;

}

int Employee::getAge(){
	 return age;

}

void Employee::addGender(string ngender){
	gender=ngender;
}

void Employee::getGender(){
	cout<<left<<gender;

}

void Employee::addTitle(string njTitle){
	 jTitle=njTitle;

	}

void Employee::getTitle(){
	 cout<<left<<setw(10)<<jTitle;

	}

void Employee::addSalary(long int nsalary){
	 salary=nsalary;
	}

void Employee::getSalary(){
	 cout<<left<<salary;
	}


void Employee::addDate(int a,int b,int c){
	Date temp(a,b,c);
	hiredate=temp;

	}

void Employee::getDate(){

	hiredate.printDate();

	}



void Employee::print(){

	cout<< endl<<"-------------------------------------------------------------------------------------------------------------------\t" <<endl;
	cout << "NAME\t\t"<<left<<"EmployeeID\t"<<left<<"Phone\t\t"<<left <<"Age\t"<<left<<"Gender\t"<<left<<"JobTitle\t"<<left<<"Salary\t "<<left<<"HireDate\t"<<endl;

    getName();
    cout<<"\t";
    getId();
    cout<<"\t\t";
    cout<<getPhone();
    cout<<"\t";
    cout<<getAge();
    cout<<"\t";
    getGender();
    cout<<"\t";
    getTitle();
    cout<<"\t";
    getSalary();
    cout<<"\t";
    getDate();

    cout<<endl;
}


void Employee::addIntAge(int b){
     age=this->age+b;
}


bool Employee::operator==(Employee b){
	 if (getPhone()==b.getPhone())
		 return true;
	 else
		 return false;

}

Employee Employee::operator+(int b){
	addIntAge(b);
	Employee mock;
	mock.name=this->name;
	mock.empID=this->empID;
	mock.phoneNum=this->phoneNum;
	mock.age=this->age;
	mock.gender=this->gender;
	mock.jTitle=this->jTitle;
	mock.salary=this->salary;
	mock.hiredate=this->hiredate;
	return mock;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}




void checkNum(Employee left, Programmer right ){

	   cout<<"\n ++++++ Phone ++++ ++++++ "<<endl;
	   if  (left.getPhone() == right.getPhone()){
		   cout<<endl;
		   cout <<"Equal Numbers"<<endl;
		   left.getName();
		   cout<<endl;
	   	   right.getName();
	   	   cout<<endl;
		   cout <<"Equal Numbers"<<endl;}
	   else
			cout<<"Not Equal"<<endl;

	   cout<<"\n ++++++ +++++ ++++ Number "<<endl;
}


ostream& operator<<(ostream& out, Employee temp){
	out<< endl<<"-------------------------------------------------------------------------------------------------------------------\t" <<endl;
		out << "NAME\t\t"<<left<<"EmployeeID\t"<<left<<"Phone\t\t"<<left <<"Age\t"<<left<<"Gender\t"<<left<<"JobTitle\t"<<left<<"Salary\t "<<left<<"HireDate\t"<<endl;

		temp.getName();
	    out<<"\t";
	    temp.getId();
	    out<<"\t\t";
	    out<<temp.getPhone();
	    out<<"\t";
	    out<<temp.getAge();
	    out<<"\t";
	    temp.getGender();
	    out<<"\t";
	    temp.getTitle();
	    out<<"\t";
	    temp.getSalary();
	    out<<"\t";
	    temp.getDate();

	    out<<endl;

	    return out;

}



istream& operator>>(istream& in, Employee& input){


	string nname;
	int nempID;
	long int nphoneNum;
	int nage;
	string njTitle;
	string ngender;
	long int nsalary;
	int nmonth;
	int nday;
	int nyear;

    cout<<"Enter name : ";
	getline(in,nname);
	cout<<"Enter ID : ";
	in>>nempID;
	cout<<"Enter Number : ";
	in>>nphoneNum;
	cout<<"Enter Age : ";
	in>>nage;
	cout<<"Enter Gender : ";
	in>>ngender;
	cout<<"Enter Title : ";
	in>>njTitle;
	cout<<"Enter Salary : ";
	in>>nsalary;
	cout<<"Enter Month : ";
	in>>nmonth;
	cout<<"Enter Day : ";
	in>>nday;
	cout<<"Enter Year : ";
	in>>nyear;

	input.addName(nname);
	input.addId(nempID);
	input.addPhone(nphoneNum);
	input.addAge(nage);
	input.addGender(ngender);
	input.addTitle(njTitle);
	input.addSalary(nsalary);
	input.addDate(nmonth,nday,nyear);


	return in;
};

