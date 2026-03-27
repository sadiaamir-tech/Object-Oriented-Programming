#include <iostream>
using namespace std;
class Student {
private:
    string name;
public:
    static int totalStudents; 
    Student(string n) {
        name = n;
        totalStudents++; 
    }
    void display() {
        cout << "Student Name: " << name << endl;
    }
    static void showTotalStudents() { // static member function
        cout << "Total students created: " << totalStudents << endl;
    }
};
int Student::totalStudents = 0;
int main() {
    Student s1("Ali");
    Student s2("Sara");
    Student s3("Omar");
    s1.display();
    s2.display();
    s3.display();
    // Access static function without creating new object
    Student::showTotalStudents(); 
    return 0;
}
