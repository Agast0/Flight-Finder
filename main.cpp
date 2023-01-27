#include "FlightMap.h"
#include <iostream>

int main() {

    FlightMap fm( "cityFile.txt", "flightFile.txt" );

    fm.displayAllCities();
    cout << endl;

    fm.displayAdjacentCities( "W" );
    cout << endl;

    fm.displayAdjacentCities( "X" );
    cout << endl;

    fm.displayFlightMap();
    cout << endl;

    fm.findFlights( "W", "Z" );
    cout << endl;

    fm.findFlights( "S", "P" );
    cout << endl;

    fm.findFlights( "Y", "Z" );
    cout << endl;

    fm.findFlights( "P", "Z" );
    cout << endl;

    fm.findFlights("New York", "P");

    return 0;
}
