
#include "electricField.h"
#include "magneticField.h"

int main() {
    // ElectricField object with initial values
    ElectricField eField1(1e5, 2.0, 3.5);
    ElectricField eField2(0.5, 0.3, 0.7);

    std::cout << "Electric Field: ";
    eField1.printMagnitude();
    std::cout << eField1 << std::endl;

    eField1.calculateElectricField(1e-6, 0.1); // Calculate the electric field usin Gauss's Law
    eField1.printCalculatedElectricField();

    ElectricField eFieldSum = eField1 + eField2; // Print resul
    std::cout << "Electric Fields Total: " << eFieldSum << std::endl;

    // MagneticField object with initial values
    MagneticField mField1(0.1, 0.2, 0.3);
    MagneticField mField2(0.5, 0.3, 0.1);

    std::cout << "\nMagnetic Field: ";
    mField1.printMagnitude();
    std::cout << mField1 << std::endl;

    mField1.calculateMagneticField(10.0, 0.05);
    mField1.printCalculatedMagneticField();

    MagneticField mFieldSum = mField1 + mField2;// Print result
    std::cout << "Magnetic Fields total: " << mFieldSum << std::endl;

    return 0;
}