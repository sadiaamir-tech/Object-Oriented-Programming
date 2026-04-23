#include <iostream>
using namespace std;
class Character {
public:
    virtual void attack() {
        cout << "Character attacks!" << endl;
    }
    virtual void power() {
        cout << "Character uses power!" << endl;
    }
};
class Warrior : public Character {
public:
    void attack() override {
        cout << "Warrior slashes with sword!" << endl;
    }
    void power() override {
        cout << "Warrior uses shield power!" << endl;
    }
};
class Mage : public Character {
public:
    void attack() override {
        cout << "Mage casts fireball!" << endl;
    }
    void power() override {
        cout << "Mage uses magic spell!" << endl;
    }
};
class DamageCalculator {
public:
    int calculateDamage(int base) {
        return base * 10; 
    }
    int calculateDamage(int base, int multiplier) {
        return base * multiplier;
    }
};
class Position {
public:
    int x, y;
    Position(int x=0, int y=0) : x(x), y(y) {}

    Position operator+(const Position& other) {
        return Position(x + other.x, y + other.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Warrior w;
    Mage m;

    Character* c1 = &w;
    Character* c2 = &m;

    c1->attack();
    c1->power();

    c2->attack();
    c2->power();

    DamageCalculator dc;
    cout << "Basic Damage: " << dc.calculateDamage(5) << endl;
    cout << "Special Damage: " << dc.calculateDamage(5, 3) << endl;

    Position p1(2, 3), p2(4, 5);
    Position p3 = p1 + p2;
    cout << "Combined Position: ";
    p3.display();
    return 0;
}

