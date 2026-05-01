#include<iostream>
using namespace std;

class Array {
    int size;
    int* ptr;

public:

    // ?? Default + Parameterized Constructor
    Array(int s = 0) {
        size = s;
        if (size > 0)
            ptr = new int[size];
        else
            ptr = NULL;
    }

    // ?? Copy Constructor (Deep Copy)
    Array(const Array& obj) {
        size = obj.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = obj.ptr[i];
        }
    }

    // ?? Assignment Operator
    Array& operator=(const Array& obj) {
        if (this != &obj) {
            delete[] ptr;

            size = obj.size;
            ptr = new int[size];
            for (int i = 0; i < size; i++) {
                ptr[i] = obj.ptr[i];
            }
        }
        return *this;
    }

    // ?? Input Function
    void input() {
        for (int i = 0; i < size; i++) {
            cin >> ptr[i];
        }
    }

    // ?? Display Function
    void display() {
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    // ?? Indexing Operator []
    int& operator[](int index) {
        return ptr[index];
    }

    // ?? Destructor
    ~Array() {
        delete[] ptr;
    }
};
int main() {
    Array a1(3);
    cout << "Enter elements: ";
    a1.input();

    cout << "Array a1: ";
    a1.display();

    // Copy constructor
    Array a2 = a1;
    cout << "Array a2 (copy): ";
    a2.display();

    // Assignment operator
    Array a3;
    a3 = a1;
    cout << "Array a3 (assigned): ";
    a3.display();

    // Indexing
    cout << "First element of a1: " << a1[0];

    return 0;
}
