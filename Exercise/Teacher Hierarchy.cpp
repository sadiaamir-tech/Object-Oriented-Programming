#include <iostream>
#include <string>
using namespace std;
class Teacher {
private:
    string Name;
    int Age;
    string Institute;
public:
    void setName(string n) { Name = n; }
    void setAge(int a) { Age = a; }
    void setInstitute(string i) { Institute = i; }

    string getName() { return Name; }
    int getAge() { return Age; }
    string getInstitute() { return Institute; }
};

class HumanitiesTeacher : public Teacher {
private:
    string Department = "Humanities";
    string CourseName;
    string Designation;
public:
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void showInfo() {
        cout << "Department: " << Department << "\nCourse: " << CourseName 
             << "\nDesignation: " << Designation
             << "\nName: " << getName() << ", Age: " << getAge() 
             << ", Institute: " << getInstitute() << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string Department = "Science";
    string CourseName;
    string Designation;
public:
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void showInfo() {
        cout << "Department: " << Department << "\nCourse: " << CourseName 
             << "\nDesignation: " << Designation
             << "\nName: " << getName() << ", Age: " << getAge() 
             << ", Institute: " << getInstitute() << endl;
    }
};

class MathsTeacher : public Teacher {
private:
    string Department = "Maths";
    string CourseName;
    string Designation;
public:
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void showInfo() {
        cout << "Department: " << Department << "\nCourse: " << CourseName 
             << "\nDesignation: " << Designation
             << "\nName: " << getName() << ", Age: " << getAge() 
             << ", Institute: " << getInstitute() << endl;
    }
};

int main() {
   
    string name;
	int age;
	string inst;
    string course;
	string des;
	
    HumanitiesTeacher ht;
    cout << "Enter Humanities Teacher Name, Age, Institute: ";
    cin >> name >> age >> inst;
    ht.setName(name);
	ht.setAge(age); 
	
	ht.setInstitute(inst);
    cout << "Enter Course Name and Designation: ";
    cin >> course >> des;
    ht.setCourseName(course); 
	ht.setDesignation(des);
    ht.showInfo();

    ScienceTeacher st;
    cout << "\nEnter Science Teacher Name, Age, Institute: ";
    cin >> name >> age >> inst;
    st.setName(name);
	 st.setAge(age);
	  st.setInstitute(inst);
    cout << "Enter Course Name and Designation: ";
    cin >> course >> des;
    st.setCourseName(course); 
	st.setDesignation(des);
    st.showInfo();

    MathsTeacher mt;
    cout << "\nEnter Maths Teacher Name, Age, Institute: ";
    cin >> name >> age >> inst;
    mt.setName(name);
	mt.setAge(age);
	mt.setInstitute(inst);
    cout << "Enter Course Name and Designation: ";
    cin >> course >> des;
    mt.setCourseName(course); 
	mt.setDesignation(des);
    mt.showInfo();

    return 0;
}
