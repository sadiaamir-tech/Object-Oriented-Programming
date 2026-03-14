#include <iostream>
using namespace std;
class Calculator {
private:
    double Num1, Num2, Num3;
public:
    Calculator() {
        cout << "Enter first number: ";
        cin >> Num1;
        cout << "Enter second number: ";
        cin >> Num2;
        cout << "Enter third number: ";
        cin >> Num3;
    }
    double add(double a, double b) {
        return a + b;
    }
    double add(double a, double b, double c) {
        return a + b + c;
    }
    double multiply(double a, double b) {
        return a * b;
    }
    double multiply(double a, double b, double c) {
        return a * b * c;
    }
    double subtract(double a, double b) {
        return a - b;
    }
    double divide(double a, double b) {
        if(b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    void demo() {
        cout << "\nAddition of Num1 and Num2: " << add(Num1, Num2) << endl;
        cout << "Addition of Num1, Num2, Num3: " << add(Num1, Num2, Num3) << endl;

        cout << "\nMultiplication of Num1 and Num2: " << multiply(Num1, Num2) << endl;
        cout << "Multiplication of Num1, Num2, Num3: " << multiply(Num1, Num2, Num3) << endl;

        cout << "\nSubtraction of Num1 - Num2: " << subtract(Num1, Num2) << endl;
        cout << "Division of Num1 / Num2: " << divide(Num1, Num2) << endl;
    }
};

int main() {
    Calculator calc;
    calc.demo();

    return 0;
}
