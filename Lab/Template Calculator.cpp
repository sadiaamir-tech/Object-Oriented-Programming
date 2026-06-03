#include <iostream>
using namespace std;

template <class T1, class T2>
class Calculator {
private:
    T1 num1;
    T2 num2;

public:
    Calculator(T1 a, T2 b) {
        num1 = a;
        num2 = b;
    }

    void add() {
        cout << "Addition: " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "Subtraction: " << (num1 - num2) << endl;
    }

    void multiply() {
        cout << "Multiplication: " << (num1 * num2) << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << (num1 / num2) << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }
};

int main() {
    Calculator<int, int> c1(10, 5);
    cout << "Integer Operations:" << endl;
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    cout << endl;

    Calculator<int, float> c2(10, 3.5);
    cout << "Mixed DataType Operations:" << endl;
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();

    return 0;
}
