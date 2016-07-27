//============================================================================
// Name        : datastore.cpp
// Author      : Chatura A
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "bank.h"
#include <vector>


using namespace std;

int main() {

	cout<<"Starting The Input"<<endl;
	bank store;
    store.getInList();
    store.printCustomers();

    cout<<"Ending The Input"<<endl;
  return 0;
}
