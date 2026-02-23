#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // Data hidden (private)

public:
    // Setter function
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            marks = 0;
        }
    }

    // Getter function
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    s1.setMarks(85);   // Setting value
    cout << "Marks: " << s1.getMarks();  // Getting value

    return 0;
}
