#ifndef FIELD_H
#define FIELD_H

#include <iostream>

class Field {
protected:
    double *value; // Dynamically allocated array for components: (x,y,z)

public:
    Field();//Default constructor
    Field(double x, double  y, double z); //Cnstructor with initial values
    Field(const Field &other); // Copy constructor
    virtual ~Field(); // Destructor

    void printMagnitude() const; //Print magnitude of the field
    friend std::ostream& operator<<(std::ostream &out, const Field &f); // Overloaded << operator
};

#endif