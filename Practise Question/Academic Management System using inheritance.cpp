#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : virtual public Person {
protected:
    int rollNumber;

public:
    Student(string n = "", int a = 0, int r = 0)
        : Person(n, a), rollNumber(r) {}

    void displayStudent() const {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Employee : virtual public Person {
protected:
    int employeeID;

public:
    Employee(string n = "", int a = 0, int id = 0)
        : Person(n, a), employeeID(id) {}

    void displayEmployee() const {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};
class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, int id)
        : Person(n, a), Student(n, a, r), Employee(n, a, id) {}

    void display() const {
        cout << "\n--- Teaching Assistant Details ---\n";
        displayPerson();  
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};
int main() {
    TeachingAssistant ta1("Ali", 22, 101, 5001);
    TeachingAssistant ta2("Ahmed", 24, 102, 5002);
    ta1.display();
    ta2.display();

    return 0;
}
