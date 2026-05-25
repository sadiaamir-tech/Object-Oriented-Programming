#include <iostream>
#include <cmath>
using namespace std;

class Vector {
    double x, y;

public:
    Vector(double a=0, double b=0) {
        x = a;
        y = b;
    }

    Vector operator+(Vector v) {
        return Vector(x + v.x, y + v.y);
    }

    Vector operator-(Vector v) {
        return Vector(x - v.x, y - v.y);
    }

    Vector operator*(double s) {
        return Vector(x * s, y * s);
    }

    Vector operator/(double s) {
        return Vector(x / s, y / s);
    }

    double magnitude() {
        return sqrt(x*x + y*y);
    }

    void show() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main() {
    Vector v1(3,4), v2(1,2);

    cout<<"v1: "; v1.show();
    cout<<"v2: "; v2.show();

    cout<<"Add: "; (v1+v2).show();
    cout<<"Sub: "; (v1-v2).show();
    cout<<"Mul: "; (v1*2).show();
    cout<<"Div: "; (v1/2).show();

    cout<<"Magnitude of v1: "<< v1.magnitude();

    return 0;
}
