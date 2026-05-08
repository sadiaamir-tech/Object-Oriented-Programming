#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string designation;
    double salary;

public:
    Employee(string n, int i, string d, double s)
        : name(n), id(i), designation(d), salary(s) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }

    friend void updateSalary(Employee &emp, double newSalary);
};

void updateSalary(Employee &emp, double newSalary) {
    emp.salary = newSalary; 
    cout << "Salary updated successfully!" << endl;
}

class Payroll {
public:
    void processSalary(Employee &emp, double revisedSalary) {
        updateSalary(emp, revisedSalary); 
    }
};

int main() {
    Employee e1("Ali", 101, "Developer", 50000);
    Payroll p;

    cout << "\n--- Before Update ---\n";
    e1.display();

    p.processSalary(e1, 60000);

    cout << "\n--- After Update ---\n";
    e1.display();

    return 0;
}

