#include "field.h"
#include <cmath>

Field::Field() { // Default constructor setting components to (0,0,0)
     value = new double[3];
    value[0] = 0.0;
    value[1] = 0.0;
    value[2] = 0.0;
}

// Constructor that will have the initial values
Field::Field(double x, double y, double z) {
    value = new double[3];
    value[0] = x;
    value[1] = y;
    value[2] = z;
}
// Copy constructo
Field::Field(const Field &other)  {
    value = new double[3];
    for (int i = 0; i < 3; ++i) {
        value[i] = other.value[i];
    }
}

// Destructor to release allocated memory
Field::~Field() {
    delete[] value;
}


void Field::printMagnitude() const { // Calculate and print the magnitude of the vector
    double magnitude = sqrt(value[0] * value[0] + value[1] * value[1] + value[2] * value[2]);
    std::cout << "Magnitude: " << magnitude << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Field &f) {// Overloaded << operator to print field components
    out << "Components: (" << f.value[0] << ", " << f.value[1] << ", " << f.value[2] << ")";
    return out;
}