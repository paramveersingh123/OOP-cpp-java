// Vehicle Registration System //
#include <iostream>
using namespace std;

class Vehicle {
public:
    int RegNo;
    string company_name;

    void VehicleDetails() {
        cout << "Enter Registration Number: ";
        cin >> RegNo;
        cout << "Enter Company Name: ";
        cin >> company_name;
    }
};

class Car : public Vehicle {
public:
    string fuel_type;
    int engine_capacity;

    void CarDetails() {
        cout<<" CAR DETAILS: "<< endl;
        VehicleDetails();
        cout << "Enter Fuel Type: ";
        cin >> fuel_type;
        cout << "Enter Engine Capacity in cc: ";
        cin >> engine_capacity;
    }
};

class Bike : public Vehicle {
public:
    string fuel_type;
    int engine_capacity;

    void BikeDetails() {
        cout<<" BIKE DETAILS: "<< endl;
        VehicleDetails();
        cout << "Enter Fuel Type: ";
        cin >> fuel_type;
        cout << "Enter Engine Capacity: ";
        cin >> engine_capacity;
    }
};

int main() {
    Car c1, c2;
    Bike b1, b2;

    c1.CarDetails();
    c2.CarDetails();

    b1.BikeDetails();
    b2.BikeDetails();

    return 0;
}