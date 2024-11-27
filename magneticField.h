#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H

#include "field.h"

// MagneticField class inheriting from Field
class MagneticField : public Field {
private:
    double calculatedMagneticField; // Stores the calculated magnetic field value

public:
    MagneticField(); // Default constructor
    MagneticField(double x, double y, double z); // Constructor with initial values

    void calculateMagneticField(double I, double r); // Calculate usng Ampere Law
    void printCalculatedMagneticField() const;// Print calculated magnetic field

    MagneticField operator+(const MagneticField &other) const; // Overloaaded + operator
};

#endif