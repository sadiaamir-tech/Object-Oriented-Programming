#include <iostream>
using namespace std;

class Vehicle {
protected:
    int carId;
    string brand;
    string model;

public:
    Vehicle(int id, string b, string m) : carId(id), brand(b), model(m) {}

    virtual bool isAvailable() = 0;
    virtual void rent() = 0;
    virtual void returnVehicle() = 0;

    virtual void display() {
        cout << "ID: " << carId << ", Brand: " << brand << ", Model: " << model << endl;
    }

};

class Car : public Vehicle {
private:
    bool available;

public:
    Car(int id, string b, string m) : Vehicle(id, b, m), available(true) {}

    bool isAvailable() override {
        return available;
    }

    void rent() override {
        if (available) {
            available = false;
            cout << "Car rented successfully.\n";
        } else {
            cout << "Car is already rented.\n";
        }
    }

    void returnVehicle() override {
        available = true;
        cout << "Car returned successfully.\n";
    }

    void display() override {
        Vehicle::display();
        cout << "Status: " << (available ? "Available" : "Not Available") << endl;
    }
};

class RentalSystem {
public:
    void rentVehicle(Vehicle* v) {
        if (v->isAvailable()) {
            v->rent();
        } else {
            cout << "Vehicle not available.\n";
        }
    }

    void returnVehicle(Vehicle* v) {
        v->returnVehicle();
    }
};

class Customer {
private:
    string name;

public:
    Customer(string n) : name(n) {}

    void rentVehicle(RentalSystem &system, Vehicle* v) {
        cout << name << " is trying to rent vehicle...\n";
        system.rentVehicle(v);
    }

    void returnVehicle(RentalSystem &system, Vehicle* v) {
        cout << name << " is returning vehicle...\n";
        system.returnVehicle(v);
    }
};

int main() {
    Vehicle* vehicles[3];

    vehicles[0] = new Car(1, "Toyota", "Corolla");
    vehicles[1] = new Car(2, "Honda", "Civic");
    vehicles[2] = new Car(3, "Suzuki", "Alto");

    RentalSystem system;
    Customer c1("Ali");

    cout << "\n--- Vehicle List ---\n";
    for (int i = 0; i < 3; i++) {
        vehicles[i]->display();
        cout << endl;
    }

    cout << "\n--- Renting Vehicle 1 ---\n";
    c1.rentVehicle(system, vehicles[0]);
    cout << "\n--- Renting Same Vehicle Again ---\n";
    c1.rentVehicle(system, vehicles[0]);

    cout << "\n--- Returning Vehicle ---\n";
    c1.returnVehicle(system, vehicles[0]);

    cout << "\n--- Renting Again ---\n";
    c1.rentVehicle(system, vehicles[0]);

    for (int i = 0; i < 3; i++) {
        delete vehicles[i];
    }

    return 0;
}
