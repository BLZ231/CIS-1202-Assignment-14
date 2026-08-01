#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class car : public vehicle {
    private:
        int numOfDoors;
    public:
        car(string manufacturer, int yearBuilt, int numOfDoors);

        int getNumOfDoors() const;

        void setNumOfDoors(int numOfDoors);

        void displayInfo() const;
};

#endif