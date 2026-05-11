#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string occupation;

public:
    Person(string occ = "unknown") {
        occupation = occ;
    }
    virtual void Draw() {
        cout << "A person can draw in many ways" << endl;
    }
};

class Artist : public Person {
public:
    Artist() : Person("artist") {}

    void Draw() override {
        cout << "An artist can draw with a paint brush" << endl;
    }
};

class Gunman : public Person {
public:
    Gunman() : Person("gunman") {}

    void Draw() override {
        cout << "A gunman draws a gun to shoot" << endl;
    }
};

int main() {
    Person p;       
    Artist a;      
    Gunman g;       

    Person* arr[3]; 

    arr[0] = &p;
    arr[1] = &a;
    arr[2] = &g;

    for (int i = 0; i < 3; i++) {
        arr[i]->Draw();
    }

    return 0;
}
