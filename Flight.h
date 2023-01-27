//
// Created by Zahaab on 12/21/2022.
//

using namespace std;
#include <string>

class Flight{
private:
    int id;
    int price;
    string arrivalCity;
    string departCity;
    bool traveled;

public:
    Flight(int id, int price, string arrivalCityName, string departCityName);
    Flight(string cityName);

    void setId(int id);
    void setPrice(int price);
    void setArrivalCity(string city);
    void setDepartCity(string city);
    void setTraveled(bool traveled);

    int getId();
    int getPrice();
    string getArrivalCity();
    string getDepartCity();
    bool getTraveled();

    bool operator<(const Flight& other) const;
};
