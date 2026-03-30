#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B derived from A" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C derived from A" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D derived from B and C" << endl;
    }
};

int main() {
    D obj;
    obj.showB();
    obj.showC();
    obj.showD();
}
