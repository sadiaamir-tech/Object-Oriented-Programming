#include <iostream>
#include <cstring>
using namespace std;
class Employee {
private:
    char* firstName;
    string lastName;
    int monthlySalary;
public:
    Employee(const char* f, string l, int s) {
        firstName = new char[strlen(f) + 1];
        strcpy(firstName, f);
        lastName = l;
        if (s > 0)
            monthlySalary = s;
        else
            monthlySalary = 0;
    }
    int getYearlySalary() {
        return monthlySalary * 12;
    }
    void raise() {
        monthlySalary = monthlySalary + (monthlySalary * 10 / 100);
    }
    void display() {
        cout << firstName << " " << lastName << endl;
        cout << "Yearly Salary: " << getYearlySalary() << endl;
        cout << "------------------" << endl;
    }
    ~Employee() {
        delete[] firstName;
    }
};
int main() {
    Employee e1("Ali", "Khan", 20000);
    Employee e2("Sara", "Ahmed", 30000);
    cout << "Before Raise\n";
    e1.display();
    e2.display();
    e1.raise();
    e2.raise();
    cout << "After 10% Raise\n";
    e1.display(); 
    e2.display();
    return 0;
}
