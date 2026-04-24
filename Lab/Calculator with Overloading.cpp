#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2, num3;

public:
    Calculator() {
        cout << "Enter Num1: ";
        cin >> num1;

        cout << "Enter Num2: ";
        cin >> num2;

        cout << "Enter Num3: ";
        cin >> num3;
    }
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
    
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }

    float divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return (float)a / b;
    }

    void displayResults() {
        cout << "\n--- Results ---" << endl;

        cout << "Add (2 nums): " << add(num1, num2) << endl;
        cout << "Add (3 nums): " << add(num1, num2, num3) << endl;

        cout << "Multiply (2 nums): " << multiply(num1, num2) << endl;
        cout << "Multiply (3 nums): " << multiply(num1, num2, num3) << endl;

        cout << "Subtract: " << subtract(num1, num2) << endl;
        cout << "Divide: " << divide(num1, num2) << endl;
    }
};

int main() {
    Calculator c;   
    c.displayResults();

    return 0;
}
