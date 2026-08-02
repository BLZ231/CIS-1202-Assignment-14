#include "vehicle.h"

vehicle::vehicle(string manufacturer, int yearBuilt) {
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

string vehicle::getManufacturer() const {
    return manufacturer;
}

int vehicle::getYearBuilt() const {
    return yearBuilt;
}

void vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void vehicle::displayInfo() const {
    cout << endl << "Vehicle Information" << endl;
    cout << "-------------------" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}