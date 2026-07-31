/*

#include "car.h"
#include "vehicle.h"

car::car(string manufacturer, int yearBuilt, int numOfDoors)
    :vehicle(manufacturer, yearBuilt) {
        this->numOfDoors = numOfDoors;
    }

int car::getNumOfDoors() const {
    return numOfDoors;
}

void car::setNumOfDoors(int numOfDoors) {
    this->numOfDoors = numOfDoors;
}

void car::displayInfo() const {
    vehicle::displayInfo();
    cout << "Number of Doors: " << numOfDoors << endl;
}

*/