#include "electricField.h"
#include <cmath>

// Default constructor: initialize base clas. set calculatedElectricField to 0
ElectricField::ElectricField() : Field(), calculatedElectricField(0.0) {}

// Constructor that contains initial values: initialize base class
ElectricField::ElectricField(double x, double y, double z) : Field(x, y, z), calculatedElectricField(0.0) {}

void ElectricField::calculateElectricField(double Q, double r) { // Compute the electric field using Gauss's Law
    const double epsilon0 = 8.85e-12; //free space
    calculatedElectricField = Q / (4 * M_PI * epsilon0 * r * r);
}


void ElectricField::printCalculatedElectricField() const { // Print the computed electric field value
    std::cout << "Electric Field: " << calculatedElectricField << std::endl;
}
ElectricField ElectricField::operator+(const ElectricField &other) const { // Overloaded + operator to add two ElectricField objects
    return ElectricField(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}