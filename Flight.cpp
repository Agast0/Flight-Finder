//
// Created by Zahaab on 12/21/2022.
//

#include "Flight.h"

Flight::Flight(int id, int price, std::string arrivalCityName, std::string departCityName) {
    this->id = id;
    this->price = price;
    this->arrivalCity = arrivalCityName;
    this->departCity = departCityName;
    this->traveled = false;
}

Flight::Flight(std::string cityName) {
    this->arrivalCity = cityName;
    this->traveled = false;
}

void Flight::setId(int id) {
    this->id = id;
}

void Flight::setPrice(int price) {
    this->price = price;
}

void Flight::setArrivalCity(std::string city) {
    this->arrivalCity = city;
}

void Flight::setDepartCity(std::string city) {
    this->departCity = city;
}

void Flight::setTraveled(bool traveled) {
    this->traveled = traveled;
}

int Flight::getId() {
    return this->id;
}

int Flight::getPrice() {
    return this->price;
}

string Flight::getArrivalCity() {
    return this->arrivalCity;
}

string Flight::getDepartCity() {
    return this->departCity;
}

bool Flight::getTraveled() {
    return this->traveled;
}

bool Flight::operator<(const Flight &other) const {
    return this->arrivalCity < other.arrivalCity;
}