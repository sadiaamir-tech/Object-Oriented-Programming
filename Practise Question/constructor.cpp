#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
    char* name;
public:
    Student() {
        name = new char[strlen("Unknown") + 1];
        strcpy(name, "Unknown");
        cout << "Default Constructor Called\n";
    }
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Parameterized Constructor Called\n";
    }
    Student(const Student& s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        cout << "Copy Constructor Called\n";
    }
    void setName(const char* n) {
        delete[] name;   
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    void display() const {
        cout << "Student Name: " << name << endl;
    }
    ~Student() {
        cout << "Destructor Called for " << name << endl;
        delete[] name;
    }
};
int main() {
    Student s1;                 
    Student s2("Sadia");        
    Student s3 = s2;            
    cout << "\n--- Original Names ---\n";
    s1.display();
    s2.display();
    s3.display();
    s3.setName("Amir");
    cout << "\n--- After Modifying Copied Object ---\n";
    s2.display();   
    s3.display();   
    return 0;
}
