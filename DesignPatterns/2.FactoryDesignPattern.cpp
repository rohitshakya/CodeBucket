#include<bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    virtual void type() = 0;
};

class Scooter : public Vehicle {
public:
    Scooter() {
        cout << "Scooter cons" << endl;
    }
    void type() override {
        cout << "Scooter" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car cons" << endl;
    }
    void type() override {
        cout << "Car" << endl;
    }
};

class Factory {
private:
    Vehicle* vehicle; // Store the created object as a pointer

public:
    Factory(string type) {
        if (type == "A") {
            vehicle = new Car();
        } else if (type == "B") {
            vehicle = new Scooter();
        }
        // No return statement here
    }

    // Accessor method to get the created object
    Vehicle* getVehicle() {
        return vehicle;
    }
};




int main() {
    Factory *factoryA = new Factory("B");
    Vehicle* obj = factoryA->getVehicle();
    obj->type();

    // Don't forget to deallocate memory
    delete obj;

    return 0;
}

