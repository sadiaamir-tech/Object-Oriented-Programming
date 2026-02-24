#include <iostream>
using namespace std;
class Complex {
private:
    int* real;
    int* imag;
public:
    Complex(int r, int i) {
        real = new int;     
        imag = new int;
        *real = r;
        *imag = i;
        cout << "Parameterized Constructor Called\n";
    }
    Complex(const Complex& obj) {
        real = new int;    
        imag = new int;
        *real = *(obj.real);   
        *imag = *(obj.imag);

        cout << "Copy Constructor Called\n";
    }
    void display() {
        cout << *real << " + " << *imag << "i" << endl;
    }
    ~Complex() {
        delete real;
        delete imag;
        cout << "Destructor Called\n";
    }
};
int main() {
    Complex c1(5, 10);   
    cout << "First Complex Number: ";
    c1.display();
    Complex c2 = c1;     // Copy constructor
    cout << "Second Complex Number (Copied): ";
    c2.display();
    return 0;
}
