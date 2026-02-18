#include <iostream>
using namespace std;
class ExamResult {
private:
    int marks;
    char grade;

    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 75) grade = 'B';
        else if (marks >= 60) grade = 'C';
        else if (marks >= 50) grade = 'D';
        else grade = 'F';
    }

public:
    void setMarks(int m) {
        if (m < 0 || m > 100) {
            cout << "Invalid marks!" << endl;
        }
        marks = m;
        calculateGrade();
    }

    int getMarks() {
        return marks;
    }

    char getGrade() {
        return grade;
    }
};

int main() {
    ExamResult s;

    s.setMarks(72);
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade() << endl;

    s.setMarks(92);
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade() << endl;
    return 0;
}
