#include <iostream>
using namespace std;
class Student {
public:
    static int count;  // Static variable to keep track of number of students
    Student() { count++; }
};
int Student::count = 0; // Initialize static variable
int main() {
    Student s1;
    Student s2;
    cout << "Total students: " << Student::count; 
}
