#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"

class truck : public vehicle {
    private:
        int towCapacity;
    public:
        truck(string manufacturer, int yearBuilt, int towCapacity);

        int getTowCapacity() const;

        void setTowCapacity(int towCapacity);

        void displayInfo() const;
};

#endif