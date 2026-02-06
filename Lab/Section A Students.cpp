#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    int semester;
    char section;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Section: ";
        cin >> section;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    Student s[4];

    for(int i = 0; i < 4; i++) {
        cout << "\nEnter data of Student " << i+1 << endl;
        s[i].input();
    }

    cout << "\nStudents belonging to Section A:\n";
    for(int i = 0; i < 4; i++) {
        if(s[i].section == 'A' || s[i].section == 'a') {
            s[i].display();
        }
    }

    return 0;
}

