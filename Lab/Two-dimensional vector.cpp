#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
    double x, y;  
public:
    Vector(double x_val = 0, double y_val = 0) {
        x = x_val;
        y = y_val;
    }
    Vector operator+(const Vector &v) {
        return Vector(x + v.x, y + v.y);
    }
    Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y);
    }
    Vector operator*(double scalar) {
        return Vector(x * scalar, y * scalar);
    }
    Vector operator/(double scalar) {
        if (scalar != 0)
            return Vector(x / scalar, y / scalar);
        else {
            cout << "Error: Division by zero!" << endl;
            return Vector(0,0);
        }
    }
    double magnitude() {
        return sqrt(x*x + y*y);
    }
    void display() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector v1(3, 4);
    Vector v2(1, 2);

    cout << "Vector 1: "; v1.display();
	cout << endl;
    cout << "Vector 2: "; v2.display();
    cout << endl;

    Vector v_add = v1 + v2;
    cout << "v1 + v2 = ";
	v_add.display(); 
	cout << endl;

    Vector v_sub = v1 - v2;
    cout << "v1 - v2 = "; 
	v_sub.display(); 
	cout << endl;

    Vector v_mul = v1 * 2;
    cout << "v1 * 2 = "; 
	v_mul.display(); 
	cout << endl;

    Vector v_div = v1 / 2;
    cout << "v1 / 2 = "; 
	v_div.display(); 
	cout << endl;

    cout << "Magnitude of v1 = " << v1.magnitude() << endl;
    cout << "Magnitude of v2 = " << v2.magnitude() << endl;

    return 0;
}
