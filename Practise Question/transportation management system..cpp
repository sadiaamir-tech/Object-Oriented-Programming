#include <iostream>
using namespace std;

class Engine {
    string engineType;
    int horsePower;
public:
    Engine(string type="", int hp=0) : engineType(type), horsePower(hp) {}
    void setEngineType(string type) { engineType = type; }
    void setHorsePower(int hp) { horsePower = hp; }
    string getEngineType() { return engineType; }
    int getHorsePower() { return horsePower; }
    void display() { cout << "Engine: " << engineType << ", HP: " << horsePower << endl; }
};

class Vehicle {
    string brand;
    int speed;
public:
    Vehicle(string b="", int s=0) : brand(b), speed(s) {}
    void setBrand(string b) { brand = b; }
    void setSpeed(int s) { speed = s; }
    string getBrand() { return brand; }
    int getSpeed() { return speed; }
    void display() { cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl; }
};

class Car : public Engine, public Vehicle {
    double fuelEfficiency; // km per liter
public:
    Car(string type, int hp, string b, int s, double fe)
        : Engine(type,hp), Vehicle(b,s), fuelEfficiency(fe) {}
    void setFuelEfficiency(double fe) { fuelEfficiency = fe; }
    double getFuelEfficiency() { return fuelEfficiency; }
    double computeRange() { return fuelEfficiency * 50; } // assume 50 liters tank
    void display() {
        Engine::display();
        Vehicle::display();
        cout << "Fuel Efficiency: " << fuelEfficiency << " km/l" << endl;
        cout << "Driving Range: " << computeRange() << " km" << endl;
    }
};

int main() {
    Car car("Hybrid", 150, "Toyota", 180, 20.0);
    car.setHorsePower(200);
    car.setSpeed(200);
    car.setFuelEfficiency(22.5);
    car.display();
    return 0;
}

