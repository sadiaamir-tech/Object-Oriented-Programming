#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Default constructor
    Fraction(int n = 1, int d = 1) {
        numerator = n;
        denominator = d;
        if (denominator == 0) {
            cout << "Denominator cannot be 0. Setting to 1.\n";
            denominator = 1;
        }
    }

    // Accessors
    int getNumerator() { return numerator; }
    int getDenominator() { return denominator; }

    // Mutators
    void setNumerator(int n) { numerator = n; }
    void setDenominator(int d) { 
        if(d != 0) denominator = d; 
        else cout << "Denominator cannot be 0.\n";
    }

    // Display fraction
    void display() {
        cout << numerator << "/" << denominator << endl;
    }

    // Compare function returning -1, 0, +1
    int compare(Fraction &other) {  
        if (denominator == other.denominator) { // Case 1
            if (numerator < other.numerator) return -1;
            else if (numerator == other.numerator) return 0;
            else return 1;
        } else { // Case 2: unlike denominators
            int num1 = numerator * other.denominator;
            int num2 = other.numerator * denominator;

            if (num1 < num2) return -1;
            else if (num1 == num2) return 0;
            else return 1;
        }
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(5, 4);
    Fraction f3(2, 3);
    Fraction f4(4, 6);

    cout << "Comparing f1 and f2: " << f1.compare(f2) << endl; // -1
    cout << "Comparing f2 and f1: " << f2.compare(f1) << endl; // 1
    cout << "Comparing f3 and f4: " << f3.compare(f4) << endl; // 0

    return 0;
}
