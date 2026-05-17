#include <iostream>
using namespace std;

class Calculator {
public:
    // add()
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }

    // multiply()
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }

    // subtract()
    int subtract(int a, int b) {
        return a - b;
    }

    // divide()
    double divide(double a, double b) {
        return a / b;
    }
};

int main() {
    Calculator c;

    cout << "Add 2 ints: " << c.add(2,3) << endl;
    cout << "Add 3 ints: " << c.add(2,3,4) << endl;
    cout << "Add 2 doubles: " << c.add(2.5,3.5) << endl;

    cout << "Multiply 2 ints: " << c.multiply(2,3) << endl;
    cout << "Multiply 3 ints: " << c.multiply(2,3,4) << endl;

    cout << "Subtract: " << c.subtract(10,4) << endl;
    cout << "Divide: " << c.divide(10,2) << endl;

    return 0;
}
