#include <iostream>
using namespace std;

class Payroll; 

class Employee {
private:
    string name;
    int id;
    string designation;
    double salary;

public:
    Employee(string n, int i, string d, double s) {
        name = n;
        id = i;
        designation = d;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }

    friend class Payroll;
};

class Payroll {
public:
    void updateSalary(Employee &emp, double newSalary) {
        emp.salary = newSalary; 
        cout << "Salary updated successfully!" << endl;
    }
};

int main() {
    Employee e1("Ali", 101, "Manager", 50000);

    cout << "Before Update:\n";
    e1.display();

    Payroll p;
    p.updateSalary(e1, 65000);

    cout << "\nAfter Update:\n";
    e1.display();

    return 0;
}
