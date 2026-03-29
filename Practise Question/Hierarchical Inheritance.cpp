#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child1 : public Parent {
public:
    void display1() {
        cout << "Child1 class" << endl;
    }
};

class Child2 : public Parent {
public:
    void display2() {
        cout << "Child2 class" << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.show();
    obj1.display1();

    obj2.show();
    obj2.display2();
}
