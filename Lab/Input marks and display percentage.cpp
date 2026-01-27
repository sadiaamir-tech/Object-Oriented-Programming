#include <iostream>
using namespace std;

int main()
{
    int rollNo;
    int mathsMarks, engMarks, sciMarks, pstMarks, pfMarks;
    int total;
    float percentage;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Maths Marks: ";
    cin >> mathsMarks;

    cout << "Enter English Marks: ";
    cin >> engMarks;

    cout << "Enter Science Marks: ";
    cin >> sciMarks;

    cout << "Enter PST Marks: ";
    cin >> pstMarks;

    cout << "Enter PF Marks: ";
    cin >> pfMarks;

    total = mathsMarks + engMarks + sciMarks + pstMarks + pfMarks;
    percentage = total / 5.0;

    cout << "\nRoll Number: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
