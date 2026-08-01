#ifndef VEHICLE_H
#define VEHICLE_H

#include<cctype>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class vehicle {
    private:
        string manufacturer;
        int yearBuilt;
    public:
        vehicle(string manufacturer, int yearBuilt);

        string getManufacturer() const;
        int getYearBuilt() const;

        void setManufacturer(string manufacturer);
        void setYearBuilt(int yearBuilt);

        void displayInfo() const;
};

#endif