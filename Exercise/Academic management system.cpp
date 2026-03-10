#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Derived Class (Hierarchical Inheritance)
class Student :  virtual public Person {
protected:
    int rollNo;
public:
    void setStudent(int r) {
        rollNo = r;
    }
    void displayStudent() {
        cout << "Roll Number: " << rollNo << endl;
    }
};
// Another Derived Class (Hierarchical Inheritance)
class Employee :  virtual public Person {
protected:
    int empID;
public:
    void setEmployee(int id) {
        empID = id;
    }
    void displayEmployee() {
        cout << "Employee ID: " << empID << endl;
    }
};
// Most Derived Class (Multiple Inheritance)
class TeachingAssistant : public Student, public Employee {
public:
    void displayTA() {
        displayPerson();     
        displayStudent();   
        displayEmployee();
    }
};
int main() {
    TeachingAssistant ta;  
    ta.Student::setPerson("sadia", 20);  
    ta.setStudent(157);
    ta.setEmployee(5001);
    cout << "Teaching Assistant Information:\n";
    ta.displayTA();
    return 0;
}
