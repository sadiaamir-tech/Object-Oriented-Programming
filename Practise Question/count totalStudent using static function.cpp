#include <iostream>
using namespace std;
class Student {
private:
    static int count; 
public:
    Student() { count++; }
    ~Student() { count--; }

    static void showCount() {  
        cout << "Total Students: " << count << endl;
    }
};
int Student::count = 0;
int main() {
    Student s1, s2;
    Student::showCount(); 
    {
        Student s3;
        Student::showCount(); 
    } // s3 destroy ho gaya
    Student::showCount();
}
