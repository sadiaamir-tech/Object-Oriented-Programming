#include <iostream>
using namespace std;

class Shape {
protected:
    int numberOfSides;
    float area;

public:
    Shape(int sides) : numberOfSides(sides), area(0) {}

    float getArea() { return area; }

    virtual void generateArea() {}  
};

// Rectangle
class Rectangle : public Shape {
protected:
    float length, width;

public:
    Rectangle(float l, float w) : Shape(4), length(l), width(w) {}

    void generateArea() override {
        area = length * width;
    }
};

// Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : Shape(0), radius(r) {}

    void generateArea() override {
        area = 3.14 * radius * radius;
    }
};

// Triangle
class Triangle : public Shape {
private:
    float height, base;

public:
    Triangle(float h, float b) : Shape(3), height(h), base(b) {}

    void generateArea() override {
        area = (height * base) / 2;
    }
};

// Square (Rectangle se inherit)
class Square : public Rectangle {
public:
    Square(float side) : Rectangle(side, side) {}

    void checkSides() {
        if (length == width)
            cout << "Sides are equal (Square)\n";
        else
            cout << "Sides are not equal\n";
    }

    void generateArea() override {
        area = length * width;
    }
};

int main() {
    Rectangle r(10, 5);
    Shape& s1 = r;    
    s1.generateArea();
    cout << "Rectangle Area: " << s1.getArea() << endl;

    Circle c(7);
    Shape& s2 = c;
    s2.generateArea();
    cout << "Circle Area: " << s2.getArea() << endl;

    Triangle t(6, 4);
    Shape& s3 = t;
    s3.generateArea();
    cout << "Triangle Area: " << s3.getArea() << endl;

    Square sq(5);
    sq.checkSides();
    Shape& s4 = sq;
    s4.generateArea();  
    cout << "Square Area: " << s4.getArea() << endl;

    return 0;
}
