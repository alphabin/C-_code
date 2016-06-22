//============================================================================
// Name        : Assignmnet_5.cpp
// Author      : Chatura Ahangama
// Version     :
// Copyright   : This is private property
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "equipment.h"
using namespace std;
using namespace EquipmentItem;

void runTest();

int main() {

	//Calls the test senario to run
	runTest();



}

void runTest(){

	equipment list1;//Inventory creates 10 item list created by equipment constructor
	list1.importInventory(); //Fills list1 with inventory of the store
	cout<<"\n \t\t==============   Inventory   ================= \n"<<endl;
	list1.printItem(); //Prints the list to display to the customer


	cout<<"\n \t\t============== Customer Receipt ================= \n"<<endl;
	equipment list2; //equipment instance to create the customers shopping list
	list2.addItemR("Nike basketball shoes",2); //Based on the Instructions on the Assignmnet adds item
	list2.addItemR("Under Armour T-shirt",3);
	list2.addItemR("Brooks running shoes",1);
	list2.addItemR("Nike shorts",4);
	list2.getCostTotal();  //This is a special function to customer list to be called by customer


	cout<<"\n \t\t==============Inventory Updated================= \n"<<endl;
	list1.updateInventory(list2); //Update the changes based on the customer list
	list1.printItem(); //Print the Inventory of the store after the change in inventory


}
