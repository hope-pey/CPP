#include <iostream>
#include <string>

// Abstract base class (like your AMateria)
class Vehicle {
protected:
    std::string type;

public:
    Vehicle(const std::string& t) : type(t) {}
    virtual ~Vehicle() {}

    std::string getType() const { return type; }

    // Pure virtual function — makes Vehicle abstract
    virtual Vehicle* clone() const = 0;

    // Virtual function to use the vehicle
    virtual void drive() const {
        std::cout << "Driving a vehicle..." << std::endl;
    }
};

// Concrete derived class (like your Ice)
class Car : public Vehicle {
public:
    Car() : Vehicle("car") {}
    Car(const Car& other) : Vehicle(other.type) {}

    // Override clone() to return new Car object, but typed as Vehicle*
    Vehicle* clone() const override {
        return new Car(*this);
    }

    // Override drive() with specific behavior
    void drive() const override {
        std::cout << "Driving a car!" << std::endl;
    }
};

int main() {
    // Vehicle* is like the big box label — we don't know what kind of vehicle exactly
    Vehicle* myVehicle = new Car();

    std::cout << "Type: " << myVehicle->getType() << std::endl;

    // Use polymorphism: drive() calls Car's version even though pointer is Vehicle*
    myVehicle->drive();

    // Clone the vehicle polymorphically:
    Vehicle* clonedVehicle = myVehicle->clone();

    std::cout << "Cloned vehicle type: " << clonedVehicle->getType() << std::endl;
    clonedVehicle->drive();

    // Clean up
    delete myVehicle;
    delete clonedVehicle;

    return 0;
}
