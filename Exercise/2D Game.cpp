#include <iostream>
#include <string>

using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character does a basic attack!" << endl;
    }
    
    virtual void power() {
        cout << "Character uses a basic power!" << endl;
    }
    
    virtual ~Character() {} 
};

class Warrior : public Character {
public:
    void attack() override {
        cout << "Warrior swings a heavy broadsword!" << endl;
    }
    
    void power() override {
        cout << "Warrior uses Berserker Rage!" << endl;
    }
};

class Mage : public Character {
public:
    void attack() override {
        cout << "Mage shoots a magic missile!" << endl;
    }
    
    void power() override {
        cout << "Mage casts a destructive Meteor Strike!" << endl;
    }
};

class DamageCalculator {
public:
    int calculateDamage(int baseDamage) {
        return baseDamage;
    }
    
    int calculateDamage(int baseDamage, int multiplier) {
        return baseDamage * multiplier;
    }
};

class Position {
public:
    int x, y;
    
    Position(int x = 0, int y = 0) : x(x), y(y) {}
    
    Position operator+(const Position& other) const {
        Position temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Character* charPtr; 
    
    Warrior myWarrior;
    Mage myMage;
    
    charPtr = &myWarrior;
    charPtr->attack();
    charPtr->power();
    
    cout << endl;
    
    charPtr = &myMage;
    charPtr->attack();
    charPtr->power();
    
    DamageCalculator calc;
    
    int basicDmg = calc.calculateDamage(20);         
    int specialDmg = calc.calculateDamage(20, 3);    
    
    cout << "\nBasic Attack Damage: " << basicDmg << endl;
    cout << "Special Attack Damage: " << specialDmg << endl;
    
    Position p1(5, 10);
    Position p2(3, 7);
    
    Position combinedPosition = p1 + p2; 
    
    cout << "\nPosition 1: "; p1.display();
    cout << "Position 2: "; p2.display();
    cout << "Combined Position: "; combinedPosition.display();
    
    return 0;
}
