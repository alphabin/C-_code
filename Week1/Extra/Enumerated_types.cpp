//
//  Enumerated_types.cpp
//  This is an example to show how Enumrated types behave
//  Created by Chatura Ahangama on 5/31/16.
//

#include "Enumerated_types.hpp"
#include <iostream>

using namespace std;
//Enumerated types are used to declare a set of integer constants
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
// by deafult { 0       ,1       ,2         ,3        ,4      ,5       ,6}

enum Weekday off;

int main()
{
    
    

    Weekday first_day = MONDAY;
    Weekday last_day = SUNDAY;
    Weekday mid_week = Weekday(3); //Casting of the value to type Weekday
    int x=Weekday(3); //Enumerations can be promoted as int types
    off=SATURDAY; //Legal
    
    cout<< first_day << endl;
    cout<< last_day << endl;
    cout<< mid_week << endl;
    cout<< x << endl;
    cout<< off << endl;
    

}