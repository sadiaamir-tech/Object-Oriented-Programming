#include <iostream>
#include <cstring>
using namespace std;
class Employee {
private:
    char* EmployeeName;
    const int EmployeeId;  
public:
    Employee(const char* name, int id) : EmployeeId(id) {
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    void setName(const char* name) {
        delete[] EmployeeName;  
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    const char* getName() const {
        return EmployeeName;
    }
    int getId() const {
        return EmployeeId;
    }
    void display() const {
        cout << "Employee Name: " << getName() << endl;
        cout << "Employee ID: " << getId() << endl;
    }
    ~Employee() {
        delete[] EmployeeName;
    }
};
int main() {
    Employee Employee1("Ali", 101);
    Employee Employee2("Sara", 102);
    Employee Employee3("Ahmed", 103);
    Employee1.display();
    Employee2.display();
    Employee3.display();
    cout << "\nAfter Changing Name:\n";
    Employee1.setName("Usman");
    Employee1.display();
    return 0;
}
