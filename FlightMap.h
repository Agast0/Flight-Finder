//
// Created by Zahaab on 12/21/2022.
//

#include "Flight.h"
#include <list>
#include <vector>
#include <map>
#include <stack>
#include <iostream>
#include <fstream>
#include <string>

class FlightMap {
public:
    FlightMap( const string cityFile, const string flightFile );
    ~FlightMap();

    void displayAllCities() const;
    void displayAdjacentCities( const string cityName ) const;
    void displayFlightMap() const;

    void findFlights(const string deptCity, const string destCity);

    int findIndex(string cityName) const;
    void unvisitAll();
    Flight* getNextFlight(string city);
    bool cityExistsInStack(stack<Flight> stack, string city);
    void unvisitList(list<Flight> &list);

private:
    list<string> cities;
    vector<list<Flight>> flightMap;
};

