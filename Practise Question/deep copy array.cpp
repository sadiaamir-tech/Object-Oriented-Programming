#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    // Deep Copy Constructor
    Array(const Array &obj) {
        size = obj.size;

        // new memory allocate
        arr = new int[size];

        // copy values
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    // Input function
    void input() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Display function
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a1(5);

    cout << "Enter elements:\n";
    a1.input();

    // Copy constructor call
    Array a2 = a1;

    cout << "Original Array:\n";
    a1.display();

    cout << "Copied Array:\n";
    a2.display();

    return 0;
}
