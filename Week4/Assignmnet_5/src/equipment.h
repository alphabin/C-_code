/*
 * equipment.h
 *  Created on: Jun 19, 2016
 *      Author: Chatura Ahangama
 *      Assignment :5
 */

#ifndef EQUIPMENT_H_
#define EQUIPMENT_H_

#include <iostream>


using namespace std;


namespace EquipmentItem  //Define the namespace that equipment class exists
{

    struct Item{ //To create a structure holding the name,quantity,and price,
    	         //Ambiguous uses in quantity and price in receipt portion.

    	public:  //The element are otherwise locked out if in private
    	string name; //Name of the equipment
    	int quantity; //How many in the inventory or how many purchased
    	double price; //Price per item or of how many total of that item

    	Item(string nameIN,int quantityIN,double priceIN) //Item Constructor takes in the name, quantity and price
    		:name(nameIN),quantity(quantityIN),price(priceIN){}


    };



	class equipment{

		public:

			equipment(); //Deafult Constructor .
			~equipment(); //Destructor
			void importInventory(); //function to fill import the default variables.
			void addItem(const string &,const int &); //Takes in the name of the item and how many units.
			void addItemR(const string & ,const int &); //Fills the second array reciept
			void printItem() const; //Print function mainly aimed at the inventory and not the receipt.
			void printItemR() const; //The print funtion for reciepts
			double getPrice(const string &); //Returns the price of given item name.
			void updateInventory(equipment ); //Updates the Inventory based on the receipt
			void getCostTotal(); //Receipt only use it give the name and quantity and the total.

		private:
			int count;             //Inventory Private counter for index the pointer array
			int count1;            //Inventory indexfor the second or reciept
			Item *equipmentIN[10]; // Up to 10 items, can increase later
			Item *recieptIN[10];   // Up to 10 items, can increase later

	};

}
#endif /* EQUIPMENT_H_ */
