#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout.width(30);

    cout.setf(ios::right);

    cout << "Hello";

    cout.unsetf(ios::left);

    return 0;
}
