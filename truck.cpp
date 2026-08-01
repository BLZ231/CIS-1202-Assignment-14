#include "truck.h"
#include "vehicle.h"

truck::truck(string manufacturer, int yearBuilt, int towCapacity)
    :vehicle(manufacturer, yearBuilt) {
        this->towCapacity = towCapacity;
    }

int truck::getTowCapacity() const {
    return towCapacity;
}

void truck::setTowCapacity(int towCapacity) {
    this->towCapacity = towCapacity;
}

void truck::displayInfo() const {
    vehicle::displayInfo();
    cout << "Towing Capacity: " << towCapacity << endl;
}