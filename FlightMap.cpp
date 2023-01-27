//
// Created by Zahaab on 12/21/2022.
//

#include "FlightMap.h"

FlightMap::FlightMap(const std::string cityFile, const std::string flightFile) {
    //Declare variables
    string fileName = cityFile;
    string input, cityName, arrivalCity;
    int id, price, flightCount = 0;
    ifstream inputFile;

    //Open the stream for the input file
    inputFile.open( fileName.c_str(), ios_base::in );
    if (!inputFile.is_open()) {
        return;
    }

    //Continue until the end of the file
    while ( inputFile.eof() == false ) {
        getline(inputFile, input);
        if (input.find('\r') != string::npos) { //Removes end of line character for windows
            input.erase(input.end() - 1, input.end());
        }

        if (input != "") {
            cities.push_back(input);
        }
    }

    //Close the input file stream
    inputFile.close();

    cities.sort(); // Sort the list of cities alphabetically

    vector<list<Flight>> data(cities.size()); // Initialize flightMap to the size of the cities list
    flightMap = data;

    fileName = flightFile;

    //Open the stream for the input file
    inputFile.open( fileName.c_str(), ios_base::in );
    if (!inputFile.is_open()) {
        return;
    }

    //Continue until the end of the file
    while ( inputFile.eof() == false ) {

        if (!inputFile.eof()) {
            getline(inputFile, input, ';');
            cityName = input;

            getline(inputFile, input, ';');
            arrivalCity = input;

            getline(inputFile, input, ';');
            id = atoi(input.c_str());

            getline(inputFile, input);
            price = atoi(input.c_str());

            Flight a(id, price, arrivalCity, cityName);

            if (findIndex(cityName) != -1) {
                flightMap[findIndex(cityName)].push_back(a); //Places flight in the flight map according to its index in the city list
                flightCount++;
            }
        }
    }

    //Close the input file stream
    inputFile.close();

    for (unsigned i = 0; i < flightMap.size(); i++) { // Sorts each city's adjacent cities alphabetically
        flightMap[i].sort();
    }

    cout << cities.size() << " cities and " << flightCount << " flights have been loaded" << endl;
}

FlightMap::~FlightMap() {
//Empty deconstructor
}

int FlightMap::findIndex(std::string cityName) const {
    int index = 0;

    for (auto x: cities) {
        if (x == cityName) {
            return index;
        } else {
            index++;
        }
    }

    return -1;
}

void FlightMap::displayAllCities() const {
    cout << "The list of the cities that HPAir serves is given below:" << endl;

    if (cities.size() > 0) {
        for (auto x: cities) {
            cout << x << ", ";
        }
    }

    cout << endl;
}

void FlightMap::displayAdjacentCities(const std::string cityName) const {
    int index = findIndex(cityName);

    cout << "The cities adjacent to " << cityName << " are:" << endl;
    cout << cityName << " -> ";

    if (index != -1) {
        for (auto x: flightMap[index]) {
            cout << x.getArrivalCity() << ", ";
        }
    }

    cout << endl;
}

void FlightMap::displayFlightMap() const {
    int i = 0;
    cout << "The whole flight map is given below:" << endl;

    for (auto x: cities) {
        cout << x << " -> ";

        for (auto y: flightMap[i]) {
            cout << y.getArrivalCity() << ", ";
        }

        i++;
        cout << endl;
    }
}

void FlightMap::findFlights(const std::string deptCity, const std::string destCity) {
    stack<Flight> flightStack;
    string top;
    unvisitAll();
    list<Flight> path;
    vector<list<Flight>> allPaths;
    map<int, int> sorted;

    Flight depart(deptCity);
    flightStack.push(depart);

    while (!flightStack.empty()) {
        top = flightStack.top().getArrivalCity();

        if (top != destCity) {
            Flight* nextFlight = getNextFlight(top);
            if (nextFlight == nullptr) { //If no available flights
                flightStack.pop();

                if (findIndex(top) != -1) {
                    unvisitList(flightMap[findIndex(top)]);
                }

                if (path.size() > 0) {
                    path.pop_back();
                }
            } else if (cityExistsInStack(flightStack, nextFlight->getArrivalCity())) {
                //Do nothing, avoids circles
            } else {
                flightStack.push(*nextFlight);
                path.push_back(*nextFlight);
            }
        } else {
            allPaths.push_back(path); //Stores flight path

            if (!path.empty()) {
                path.pop_back();
            }

            flightStack.pop();
        }
    }

    for (unsigned i = 0; i < allPaths.size(); i++) {
        int totalPrice = 0;

        for (auto x: allPaths[i]) {
            totalPrice += x.getPrice();
        }

        sorted.insert(make_pair(totalPrice, i)); //Adds flight paths to a map sorted according to total price
    }

    cout << "Request is to fly from " << deptCity << " to " << destCity << ":" << endl;

    if (allPaths.size() > 0) {
        for (auto x: sorted) {
            for (auto y: allPaths[x.second]) {
                cout << "Flight #" << y.getId() << " from " << y.getDepartCity() << " to " << y.getArrivalCity() << ", Cost: "
                     << y.getPrice() << " TL" << endl;
            }

            cout << "Total Cost: " << x.first << " TL" << endl;
        }
    } else {
        cout << "Sorry. HPAir does not fly from " << deptCity << " to " << destCity << "." << endl;
    }
}

void FlightMap::unvisitAll() {
    for (unsigned i = 0; i < flightMap.size(); i++) {
        for (list<Flight>::iterator it = flightMap[i].begin(); it != flightMap[i].end(); it++) {
            it->setTraveled(false);
        }
    }
}

Flight* FlightMap::getNextFlight(std::string city) { //Returns next flight if it is available, otherwise returns nullptr
    int index = findIndex(city);

    if (index != -1) {
        list<Flight>::iterator it = flightMap[index].begin();

        for (it = flightMap[index].begin(); it != flightMap[index].end(); it++) {
            if (it->getTraveled() == false) {
                it->setTraveled(true);
                return &(*it);
            }
        }
    }

    return nullptr;
}

bool FlightMap::cityExistsInStack(stack <Flight> stack, std::string city) { //Checks if the city exists in the stack
    vector<Flight> flights;

    while (!stack.empty()) {
        flights.push_back(stack.top());
        stack.pop();
    }

    for (auto x: flights) {
        if (x.getArrivalCity() == city) {
            return true;
        }
    }

    return false;
}

void FlightMap::unvisitList(list <Flight> &list) { //Sets traveled to false for all flights in the list
    for (auto it = list.begin(); it != list.end(); it++) {
        it->setTraveled(false);
    }
}