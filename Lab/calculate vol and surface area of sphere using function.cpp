#include <iostream>  
using namespace std;

// Function to calculate surface area
float surfaceArea(float r) {
    return 4*3.142*r*r;
}

// Function to calculate volume
float volume(float r) {
    return (4.0 / 3.0)*3.142*r*r*r;
}

int main() {
    float radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    float surface = surfaceArea(radius);
    float vol = volume(radius);

    cout << "Surface area of the sphere: " << surface << endl;
    cout << "Volume of the sphere: " << vol << endl;

    return 0;
}
