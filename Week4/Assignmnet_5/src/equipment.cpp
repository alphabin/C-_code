/*
 * equipment.cpp
 *
 *  Created on: Jun 19, 2016
 *      Author: Chatura Ahangama
 *      Assignment :5
 */

#include "equipment.h"
#include <iostream>
#include <iomanip>

using namespace std; //use the standard namespace
using namespace EquipmentItem;

equipment::equipment(){


	count=0; //When this object is called it intialize the arrays index to the start
	count1=0; //Counter for Reciept

}

equipment::~equipment() {

	for(int i=0;i<count;i++){    //Deallocates the objects
		if (i < count){
		delete this->equipmentIN[i];
		}
		if (i < count1){
			delete this->recieptIN[i];//Uses delete operator to deallocate the memory
			}
	 }

}

void equipment::addItem(const string & names,const int & num){

	double price=0.00; //Creates a temp var as a holder
    price=getPrice(names); //Gets the price based on the names
    // delete equipmentIN[count]; //Delete the constructor created variable
	equipmentIN[count]=new Item(names,num,price);//Creates a dynamic variable of struct Item
	count++;//Iterates to set the next index in a pointer

}


void equipment::addItemR(const string & names,const int & num){

	double price=0.00; //Creates a temp var as a holder
    price=getPrice(names); //Gets the price based on the names
    // delete equipmentIN[count]; //Delete the constructor created variable
	recieptIN[count1]=new Item(names,num,price);//Creates a dynamic variable of struct Item
	count1++;//Iterates to set the next index in a pointer

}

void equipment::importInventory(){ // Function to get the default inventory of the store

	addItem("Nike basketball shoes",22);
	addItem("Under Armour T-shirt",33);
	addItem("Brooks running shoes", 11);
	addItem("Asics running shoes",20);
	addItem("Nike shorts",77);

}
double equipment::getPrice(const string &name){ //To return a price for the Value of the the string it matches
	if (name=="Nike basketball shoes")
		return 145.99;
	if (name=="Under Armour T-shirt")
		return 29.99;
	if (name=="Brooks running shoes")
		return 111.44;
	if (name=="Asics running shoes")
		return 165.88;
	if (name=="Nike shorts")
		return 45.77;
}

void equipment::updateInventory(equipment listIN){ //Takes in receipt

	for (int i=0;i<count;i++) //5 objects
	{
		for(int j=0;j<listIN.count1;j++) //5 iterators
		{
		 if ((this->equipmentIN[i]->name)==(listIN.recieptIN[j]->name)) // if Names match
		  {
			int temp1=this->equipmentIN[i]->quantity;  //get into a temp var
			int temp2=listIN.recieptIN[j]->quantity;
			this->equipmentIN[i]->quantity=(temp1-temp2); //subract and update to1 the main inventory
		  }
		}
	}
};


void equipment::getCostTotal(){ //Print function and creator for the receipt
	int tempQ=0;
	double tempF=0;
	string tempN;
	double tempP=0.00;
	double total=0.00;
	for(int i=0;i<count1;i++) //Iterate up to 5 items
	{
		tempQ=recieptIN[i]->quantity;
		tempN=recieptIN[i]->name;
		tempP=getPrice(tempN);//get price
		tempF=tempP*tempQ;//price per unit multiplied by quanity of the units
		recieptIN[i]->price=tempF; //assign that to the total cost per item
		total=total+tempF; //add that to the total

	}

	printItemR();
	cout<<right<<setw(60)<<" "<<" Total    "<<total<<endl; //prints total
	cout<<right<<setw(60)<<" "<<" Taxes    "<<"8.25%"<<endl;
    total=(total*.0825)+total; //displays tax accordin to tax rate
	cout<<right<<setw(60)<<" "<<"With Tax "<<total<<endl;

};

void equipment::printItem() const{  //This can be used in both a reciept and a inventory but prefer to use it in correct context

	for(int i=0;i<count;i++){
	     cout << fixed;
	     cout << setprecision(2);
	     cout<<endl<<right<<setw(25)<<(equipmentIN[i])->name
	    		   <<right<<setw(25)<<(equipmentIN[i])->quantity
				   <<right<<setw(25)<<(equipmentIN[i])->price;

 	 }
		cout<<"\n\tItem Count : "<<this->count<<endl;
}

void equipment::printItemR() const{  //This can be used in both a reciept and a inventory but prefer to use it in correct context

	for(int i=0;i<count1;i++){
	     cout << fixed;
	     cout << setprecision(2);
	     cout<<endl<<right<<setw(25)<<(recieptIN[i])->name
	    		   <<right<<setw(25)<<(recieptIN[i])->quantity
				   <<right<<setw(25)<<(recieptIN[i])->price;

 	 }

		cout<<"\n\tItem Count : "<<this->count1<<endl;
}
