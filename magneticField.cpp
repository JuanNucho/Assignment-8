#include "magneticField.h"
#include <cmath>
#include <iostream>


MagneticField::MagneticField() : Field(), calculatedMagneticField(0.0) {} // Default constructor
MagneticField::MagneticField(double x, double y, double z) : Field(x, y, z), calculatedMagneticField(0.0) {} // Constructor for initial values

void MagneticField::calculateMagneticField(double I, double r) { // Calculate magnetic field with Ampere's Law
    const double mu0 = 4 * M_PI * 1e-7; //free space
    calculatedMagneticField = I / (2 * M_PI * r * mu0);
}
// Print calculated magnetic field
void MagneticField::printCalculatedMagneticField() const {
    std::cout << "Magnetic Field: " << calculatedMagneticField << std::endl;
}
// Overloaded +operator for adding 2 MagneticField objects 
MagneticField MagneticField::operator+(const MagneticField &other) const {
    return MagneticField(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}