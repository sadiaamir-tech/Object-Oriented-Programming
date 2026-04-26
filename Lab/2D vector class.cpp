#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    float x, y;

public:
    Vector(float xVal = 0, float yVal = 0) {
        x = xVal;
        y = yVal;
    }
    
    Vector operator + (Vector v) {
        return Vector(x + v.x, y + v.y);
    }

    Vector operator - (Vector v) {
        return Vector(x - v.x, y - v.y);
    }

    Vector operator * (float scalar) {
        return Vector(x * scalar, y * scalar);
    }
    Vector operator / (float scalar) {
        if (scalar == 0) {
            cout << "Error: Division by zero!" << endl;
            return Vector();
        }
        return Vector(x / scalar, y / scalar);
    }

    float magnitude() {
        return sqrt(x * x + y * y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4);
    Vector v2(1, 2);

    cout << "Vector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    Vector v3 = v1 + v2;
	cout << "v1 + v2 = ";
    v3.display();

    Vector v4 = v1 - v2;
    cout << "v1 - v2 = ";
    v4.display();

    Vector v5 = v1 * 2;
    cout << "v1 * 2 = ";
    v5.display();

    Vector v6 = v1 / 2;
    cout << "v1 / 2 = ";
    v6.display();

    cout << "Magnitude of v1 = " << v1.magnitude() << endl;

    return 0;
}
