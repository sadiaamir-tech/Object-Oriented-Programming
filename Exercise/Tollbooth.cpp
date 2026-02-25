#include <iostream>
using namespace std;
class TollBooth {
private:
    int totalCars;      
    double totalCash;   
public:
    TollBooth() {
        totalCars = 0;
        totalCash = 0.0;
    }
    void payingCar() {
        totalCars++;       
        totalCash += 0.50;   
    }
    void display() const {
        cout << "Total cars passed: " << totalCars << endl;
        cout << "Total cash collected: $" << totalCash << endl;
    }
};
int main() {
    TollBooth toll;
    toll.payingCar();
    toll.payingCar();
    toll.payingCar();
    toll.display();
    return 0;
}
