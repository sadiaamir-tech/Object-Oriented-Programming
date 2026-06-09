#include <iostream>
using namespace std;
class Person {
public:
    virtual void Draw() {
        cout << "Person drawing\n";
    }
};
class Artist : public Person {
public:
    void Draw() {
        cout << "Artist is drawing a painting\n";
    }
};
class Gunman : public Person {
public:
    void Draw() {
        cout << "Gunman is drawing a gun\n";
    }
};

int main() {
    Person* arr[2];   

    Artist a;
    Gunman g;

    arr[0] = &a;
    arr[1] = &g;
    for(int i = 0; i < 2; i++) {
        arr[i]->Draw();
    }

    return 0;
}
