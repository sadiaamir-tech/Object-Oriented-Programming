#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("myData.txt");

    string line;
    cin >>line;
    getline(infile, line);
    cout << line << endl;

    getline(infile, line);
    cout << line << endl;

    infile.close();

    return 0;
}
