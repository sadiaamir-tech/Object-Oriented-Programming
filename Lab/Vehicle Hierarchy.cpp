#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string typeOfCar;
    string make;
    string model;
    string color;
    int year;
    int milesDriven;

public:
    Vehicle(string t, string mk, string mdl, string clr, int yr, int miles)
        : typeOfCar(t), make(mk), model(mdl), color(clr), year(yr), milesDriven(miles) {}

    void display() {
        cout << "Type: " << typeOfCar << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Miles Driven: " << milesDriven << endl;
    }
};

class GasVehicle : public Vehicle {
private:
    int fuelTankSize;

public:
    GasVehicle(string t, string mk, string mdl, string clr, int yr, int miles, int tank)
        : Vehicle(t, mk, mdl, clr, yr, miles), fuelTankSize(tank) {}

    void display() {
        Vehicle::display();
        cout << "Fuel Tank Size: " << fuelTankSize << " liters" << endl;
    }
};

class ElectricVehicle : public Vehicle {
private:
    int energyStorage;

public:
    ElectricVehicle(string t, string mk, string mdl, string clr, int yr, int miles, int storage)
        : Vehicle(t, mk, mdl, clr, yr, miles), energyStorage(storage) {}

    void display() {
        Vehicle::display();
        cout << "Energy Storage: " << energyStorage << " kWh" << endl;
    }
};

class HighPerformance : public Vehicle {
private:
    int horsePower;
    int topSpeed;

public:
    HighPerformance(string t, string mk, string mdl, string clr, int yr, int miles, int hp, int speed)
        : Vehicle(t, mk, mdl, clr, yr, miles), horsePower(hp), topSpeed(speed) {}

    void display() {
        Vehicle::display();
        cout << "Horse Power: " << horsePower << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

class SportsCar : public HighPerformance {
public:
    string gearbox;
    string driveSystem;

    SportsCar(string t, string mk, string mdl, string clr, int yr, int miles, int hp, int speed,
              string gb, string ds)
        : HighPerformance(t, mk, mdl, clr, yr, miles, hp, speed), gearbox(gb), driveSystem(ds) {}

    void display() {
        HighPerformance::display();
        cout << "Gearbox: " << gearbox << endl;
        cout << "Drive System: " << driveSystem << endl;
    }
};

class HeavyVehicle : public Vehicle {
private:
    int maxWeight;
    int numWheels;
    int length;

public:
    HeavyVehicle(string t, string mk, string mdl, string clr, int yr, int miles,
                 int weight, int wheels, int len)
        : Vehicle(t, mk, mdl, clr, yr, miles), maxWeight(weight), numWheels(wheels), length(len) {}

    void display() {
        Vehicle::display();
        cout << "Max Weight: " << maxWeight << " tons" << endl;
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Length: " << length << " meters" << endl;
    }
};

class ConstructionTruck : public HeavyVehicle {
public:
    string cargo;

    ConstructionTruck(string t, string mk, string mdl, string clr, int yr, int miles,
                      int weight, int wheels, int len, string cg)
        : HeavyVehicle(t, mk, mdl, clr, yr, miles, weight, wheels, len), cargo(cg) {}

    void display() {
        HeavyVehicle::display();
        cout << "Cargo: " << cargo << endl;
    }
};

class Bus : public HeavyVehicle {
private:
    int numSeats;

public:
    Bus(string t, string mk, string mdl, string clr, int yr, int miles,
        int weight, int wheels, int len, int seats)
        : HeavyVehicle(t, mk, mdl, clr, yr, miles, weight, wheels, len), numSeats(seats) {}

    void display() {
        HeavyVehicle::display();
        cout << "Number of Seats: " << numSeats << endl;
    }
};

int main() {
    Bus b("Bus", "Mercedes", "Citaro", "White", 2022, 50000, 18, 6, 12, 50);
    b.display();
    return 0;
}

