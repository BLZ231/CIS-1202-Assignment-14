/*
Course: CIS-1202
Name: Erik Larson
Date: 1-Aug-26
*/

#include "car.h"
#include "truck.h"
#include "vehicle.h"

int displayMenu();

vehicle vehicleChoice();

car carChoice();

truck truckChoice();

int main() {
    int userChoice = 0;

    cout << endl << "Vehicle Information Program" << endl << endl;
    do {
        userChoice = displayMenu();
    } while ((userChoice < 1) || (userChoice > 3));
    
    if (userChoice == 3) {
        vehicle userVehicle = vehicleChoice();
        userVehicle.displayInfo();
    } else if (userChoice == 1) {
        car userCar = carChoice();
        userCar.displayInfo();
    } else if (userChoice == 2) {
        truck userTruck = truckChoice();
        userTruck.displayInfo();
    }
    cout << endl;
    return 0;
}

int displayMenu() {
    int userChoice;
    bool validChoice = false;
    do {
        cout << "Input and enter the number for the vehicle type"
        << endl << endl << "1: Car" << endl << "2: Truck" << endl
        << "3: Other/Unknown" << endl << endl << "Input type: ";
        cin >> userChoice;
        if (cin.fail()) {
            cout << "Invalid input." << endl;
            cin.clear();
            cin.ignore(100, '\n');
        } else if ((userChoice < 1) || (userChoice > 3)) {
            cout << "Invalid input." << endl;
        } else {
            validChoice = true;
        }
    } while (validChoice == false);
    return userChoice;
}

vehicle vehicleChoice() {
    string manufacturer;
    int yearBuilt;
    bool validMan;
    bool validYear;
    do {
        validMan = true;
        cout << "Manufacturer: ";
        cin.ignore(100, '\n');
        getline(cin, manufacturer);
        if (manufacturer.empty()) {
            cout << "Invalid input." << endl;
            validMan = false;
        }
    } while (validMan == false);
    do {
        validYear = true;
        cout << "Year Built: ";
        cin >> yearBuilt;
        //cin.clear();
        //cin.ignore(100);
        if ((cin.fail()) || (yearBuilt < 1900) || (yearBuilt > 2030)) {
            cout << "Invalid input." << endl;
            validYear = false;
        }
    } while (validYear == false);
    return vehicle(manufacturer, yearBuilt);
}

car carChoice() {
    vehicle base = vehicleChoice();
    int numOfDoors;
    bool validDoors;
    do {
        validDoors = true;
        cout << "Number of Doors: ";
        cin >> numOfDoors;
        if ((cin.fail()) || (numOfDoors < 1) || (numOfDoors > 30)) {
            cout << "Invalid input." << endl;
            //cin.clear();
            //cin.ignore(100);
            validDoors = false;
        }
    } while (validDoors == false);
    return car(base.getManufacturer(), base.getYearBuilt(), numOfDoors);
}

truck truckChoice() {
    vehicle base = vehicleChoice();
    int towCapacity;
    bool validTow;
    do {
        validTow = true;
        cout << "Towing Capacity: ";
        cin >> towCapacity;
        if ((cin.fail()) || (towCapacity < 0) || (towCapacity > 80000)) {
            cout << "Invalid input." << endl;
            //cin.clear();
            //cin.ignore(100);
            validTow = false;
        }
    } while (validTow == false);
    return truck(base.getManufacturer(), base.getYearBuilt(), towCapacity);
}

/*
My debugger is still not working right, but otherwise this was challenging
but in an engaging way as opposed to a frustrating way.

Also in regards to the last assignment:
[do .. while (inputFile && count < maxPublications)]

Yeah, I had intended to do something like that, but I focused on everything else first
and by the end I had a feeling I had forgotten something but couldn't remember what it was.
Which honestly is annoying, it's like why would your brain remind you that you forgot something
but not actually remember what it was that it forgot?
*/