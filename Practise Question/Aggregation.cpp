#include <iostream>
using namespace std;

class Teacher {
public:
    string name;

    Teacher(string n) {
        name = n;
    }
};

class Department {
public:
    string deptName;
    Teacher* teacher;   

    Department(string d, Teacher* t) {
        deptName = d;
        teacher = t;
    }

    void display() {
        cout << deptName << " Department has teacher " << teacher->name << endl;
    }
};

int main() {
    Teacher t1("Ahmed");   

    Department d1("CS", &t1);
    d1.display();

    return 0;
}
