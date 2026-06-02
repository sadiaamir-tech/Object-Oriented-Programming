#include <iostream>
#include <vector>
using namespace std;

class Course {
    string courseCode, title;
public:
    Course(string code="", string t="") : courseCode(code), title(t) {}
    string GetCode() { return courseCode; }
    string GetTitle() { return title; }
};

class Department : virtual public Course {
    string deptName;
public:
    Department(string code, string t, string dept)
        : Course(code,t), deptName(dept) {}
    string GetDepartment() { return deptName; }
};

class Prerequisite :virtual public Course {
    vector<string> prereqList;
public:
    Prerequisite(string code, string t, vector<string> prereqs)
        : Course(code,t), prereqList(prereqs) {}
    void PrintPrerequisites() {
        cout << "Prerequisites: ";
        for(auto it = prereqList.begin(); it != prereqList.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
};

class CoRequisite : public Department, public Prerequisite {
    vector<string> coreqList;
public:
    CoRequisite(string code, string t, string dept,
                vector<string> prereqs, vector<string> coreqs)
        : Department(code,t,dept), Prerequisite(code,t,prereqs), coreqList(coreqs) {}
    void PrintRequisites() {
        cout << "Co-Requisites: ";
        for(auto it = coreqList.begin(); it != coreqList.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
};

int main() {
    vector<string> prereqs = {"CS101", "MATH101"};
    vector<string> coreqs = {"ENG101", "PHY101"};

    CoRequisite course("CS201", "OOP", "Computer Science", prereqs, coreqs);

    cout << "Course Code: " << course.GetCode() << endl;
    cout << "Title: " << course.GetTitle() << endl;
    cout << "Department: " << course.GetDepartment() << endl;
    course.PrintPrerequisites();
    course.PrintRequisites();

    return 0;
}

