#include <iostream>
using namespace std;
class Student {
private:
    const int rollNo;   
    string name;
public:
    Student(int r, string n) : rollNo(r), name(n) {
	}
    void setName(string n) {
        name = n;
    }
    void display() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(1, "Ali");
    cout << "Initial Data:" << endl;
    s1.display();
    s1.setName("Ahmed");
    cout << "After Name Change:" << endl;
    s1.display();
    return 0;
}
