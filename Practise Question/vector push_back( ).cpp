#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num={1,2,3} ;

    num.push_back(4);

    for(int i : num){
        cout << i << " ";
    }
}
