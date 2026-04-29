#include <iostream>
using namespace std;

template <class T>
class DynamicArray {
private:
    T* arr;
    int size;

public:
    // Constructor
    DynamicArray(int s) {
        size = s;
        arr = new T[size];
    }

    // Copy Constructor (deep copy)
    DynamicArray(const DynamicArray &obj) {
        size = obj.size;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    DynamicArray& operator=(const DynamicArray &obj) {
        if (this != &obj) {
            delete[] arr;

            size = obj.size;
            arr = new T[size];

            for (int i = 0; i < size; i++) {
                arr[i] = obj.arr[i];
            }
        }
        return *this;
    }

    // Indexing operator
    T& operator[](int index) {
        return arr[index];
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;
    }
};
int main() {
    DynamicArray<int> obj(5);

    obj[0] = 10;
    obj[1] = 20;

    DynamicArray<int> obj2 = obj; // copy constructor

    DynamicArray<int> obj3(5);
    obj3 = obj; // assignment operator

    cout << obj2[0];
}
