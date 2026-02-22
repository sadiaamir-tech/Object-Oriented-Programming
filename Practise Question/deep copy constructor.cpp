#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
    char* name;
public:
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];  
        strcpy(name, p.name);                
    }
    void show() {
        cout << "Name: " << name << endl;
    }
    ~Person() {
        delete[] name;
    }
};
int main() {
    Person p1("Ali");
    Person p2 = p1;   
    p1.show();
    p2.show();
    return 0;
}
