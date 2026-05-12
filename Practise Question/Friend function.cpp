#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // friend function declaration
    friend void showLength(Box b);
};

// friend function definition (outside class)
void showLength(Box b) {
    cout << "Length is: " << b.length << endl;
}

int main() {
    Box b1;
    showLength(b1);   // calling friend function

    return 0;
}
