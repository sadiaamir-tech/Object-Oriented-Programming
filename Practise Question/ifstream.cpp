#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("data.txt");

    string name;

    infile >> name;

    cout << name;

    infile.close();

    return 0;
}
