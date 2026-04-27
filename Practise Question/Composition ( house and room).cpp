#include <iostream>
using namespace std;

class Room {
public:
    Room() {
        cout << "Room Created\n";
    }
    ~Room() {
        cout << "Room Destroyed\n";
    }
};

class House {
public:
    Room room;    

    House() {
        cout << "House Created\n";
    }

    ~House() {
        cout << "House Destroyed\n";
    }
};

int main() {
    House h1;

    return 0;
}
