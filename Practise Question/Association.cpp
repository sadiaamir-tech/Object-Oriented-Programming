#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Student: " << name << endl;
    }
};

class Teacher {
public:
    string name;

    Teacher(string n) {
        name = n;
    }

    void teach(Student s) {   
        cout << name << " is teaching " << s.name << endl;
    }
};

int main() {
    Student s1("Ali");
    Teacher t1("Ahmed");

    t1.teach(s1);

    return 0;
}
