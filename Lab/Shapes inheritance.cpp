#include <iostream>
using namespace std;

class Shape {
protected:
    int numberOfSides;
    float area;

public:
    Shape(int sides) {
        numberOfSides = sides;
        area = 0;
    }
    int getNumberOfSides() {
        return numberOfSides;
    }

    float getArea() {
        return area;
    }
    void setNumberOfSides(int sides) {
        numberOfSides = sides;
    }

    void setArea(float a) {
        area = a;
    }
};
class Rectangle : public Shape {
protected:
    float length, width;

public:
    Rectangle(float l, float w) : Shape(4) {
        length = l;
        width = w;
    }

    void generateArea() {
        area = length * width;
    }
};
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : Shape(0) { 
        radius = r;
    }

    void generateArea() {
        area = 3.14 * radius * radius;
    }
};
class Triangle : public Shape {
private:
    float height, base;

public:
    Triangle(float h, float b) : Shape(3) {
        height = h;
        base = b;
    }

    void generateArea() {
        area = (height * base) / 2;
    }
};
class Square : public Rectangle {
public:
    Square(float side) : Rectangle(side, side) {}

    void checkSides() {
        if (length == width)
            cout << "Square sides are equal " << endl;
        else
            cout << "Sides are NOT equal " << endl;
    }

    void generateArea() {
        area = length * width; 
    }
};

int main() {
    Rectangle r(5, 3);
    r.generateArea();
    cout << "Rectangle Area: " << r.getArea() << endl;

    Circle c(4);
    c.generateArea();
    cout << "Circle Area: " << c.getArea() << endl;

    Triangle t(6, 2);
    t.generateArea();
    cout << "Triangle Area: " << t.getArea() << endl;

    Square s(4);
    s.checkSides();
    s.generateArea();
    cout << "Square Area: " << s.getArea() << endl;

    return 0;
}
