#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("data.txt");

    outfile << "Hello File";

    outfile.close();

    return 0;
}
