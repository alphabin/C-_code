
#include <iostream>
using namespace std;

//#include "cityTemp.h"
#include "cityTempExtend.h"

int main() {
	// declare and init arrays
	string cityNames[5] = {"Mission Viejo", "LA", "Seattle", "Denver", "DC"};
	int cityTemps[5][12] = {{55,60,65,75,80,80,85,85,75,75,60,60}};
	float cityLats[5] = {1.2,-.8,1.0,4.0,9.8};
	float cityLongs[5] = {0.0,-.1,2.0,3.5,4.0};

	// CityTemp instance & print to command line

	cout << "City Temperatures Class Data: " << endl;

	cityTemp cityTemp(cityNames, cityTemps);
	cityTemp.Print();

	// CityTempLatitudeLongitude instance & print to command line

	cout << "City Temperatures Extended Class Data: " << endl;

	CityTempLatitudeLongitude cityTempLatLong(cityLats, cityLongs, cityNames, cityTemps);

    cout<<cityTempLatLong;

    cityTemp=cityTemp+1;
    cityTemp.Print();
	return 0;
}
