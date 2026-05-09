#include <iostream>
using namespace std;

class Character {
protected:
    string name;
    int level;
    int health;

public:
    Character(string n, int l, int h) {
        name = n;
        level = l;
        health = h;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Health: " << health << endl;
    }
};

class Warrior : virtual public Character {
protected:
    int strength;

public:
    Warrior(string n, int l, int h, int s)
        : Character(n, l, h) {
        strength = s;
    }

    void meleeAttack() {
        cout << name << " performs a melee attack!" << endl;
    }
};

class Mage : virtual public Character {
protected:
    int intelligence;

public:
    Mage(string n, int l, int h, int i)
        : Character(n, l, h) {
        intelligence = i;
    }

    void castSpell() {
        cout << name << " casts a powerful spell!" << endl;
    }
};

class Archer : public Character {
protected:
    int agility;

public:
    Archer(string n, int l, int h, int a)
        : Character(n, l, h) {
        agility = a;
    }

    void rangedAttack() {
        cout << name << " performs a ranged attack!" << endl;
    }
};

class NPC : public Character {
public:
    NPC(string n, int l, int h)
        : Character(n, l, h) {}

    void behave() {
        cout << name << " follows a scripted behavior." << endl;
    }
};

class Mighty : public Warrior, public Mage {
public:
    Mighty(string n, int l, int h, int s, int i)
        : Character(n, l, h),   
          Warrior(n, l, h, s),
          Mage(n, l, h, i) {}

    void showPowers() {
        cout << "Mighty Character Powers:\n";
        meleeAttack();
        castSpell();
    }
};

int main() {
    Mighty m("Hero", 10, 100, 80, 90);

    m.display();
    m.showPowers();

    return 0;
}
