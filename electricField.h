#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H

#include "field.h"

class ElectricField : public Field {
private:
    double calculatedElectricField;//Store computed electric field values

public:
    ElectricField(); // Default constructor
    ElectricField( double x, double y, double z);// Constructor for initial values

    void calculateElectricField(double Q,  double r); // Compute electric field using Gauss's Law
    void printCalculatedElectricField() const; // Print thcomputed electric field value

    ElectricField operator+(const ElectricField &other) const; // Overlosded + operator
};

#endif