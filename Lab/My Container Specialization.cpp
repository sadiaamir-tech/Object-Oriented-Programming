#include <iostream>
using namespace std;

template <class T>
class mycontainer {
private:
    T element;

public:
    mycontainer(T arg) {
        element = arg;
    }

    T increase() {
        return ++element;
    }
};

template <>
class mycontainer<char> {
private:
    char element;

public:
    mycontainer(char arg) {
        element = arg;
    }

    char uppercase() {
        if (element >= 'a' && element <= 'z')
            element = element - 32;   
        return element;
    }
};
int main() {
    mycontainer<int> obj1(10);
    cout << "Increased int: " << obj1.increase() << endl;

    mycontainer<double> obj2(3.5);
    cout << "Increased double: " << obj2.increase() << endl;

    // Char container (specialized)
    mycontainer<char> obj3('a');
    cout << "Uppercase char: " << obj3.uppercase() << endl;

    return 0;
}
