#include <iostream>
using namespace std;

void swapThree(int *a, int *b, int *c)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "\nBefore Swapping:" << endl;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    swapThree(&x, &y, &z);

    cout << "\nAfter Swapping:" << endl;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    return 0;
}

