#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double num = 12.34567;

    cout << fixed << setprecision(2);
    cout << showpoint;

    cout << setfill('*');
    cout << setw(10);

    cout << num;

    return 0;
}
