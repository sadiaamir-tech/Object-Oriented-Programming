#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

    // Postfix ++ operator
    Counter operator++(int) {
        Counter temp;
        temp.count = count;  // old value save
        count++;             // increment
        return temp;         // old value return
    }
};

int main() {
    Counter c1, c2;

    c2 = c1++;   // postfix use

    cout << "c1 value: ";
    c1.display();

    cout << "c2 value: ";
    c2.display();

    return 0;
}
