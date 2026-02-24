#include <iostream>
using namespace std;
class Character {
private:
    int* health;
    int* attackPower;
    int* defense;
public:
    Character() {
        health = new int;
        *health = 100;
        attackPower = new int;
        *attackPower = 50;
        defense = new int;
        *defense = 30;
    }
    Character(int h, int a, int d) {
        health = new int;
        *health = h;
        attackPower = new int;
        *attackPower = a;
        defense = new int;
        *defense = d;
    }
    Character(const Character& other) {
        health = new int;
         *health = *other.health;
        attackPower = new int;
         *attackPower = *other.attackPower;
        defense = new int;
        *defense = *other.defense;
    }
    ~Character() {
        delete health;
        delete attackPower;
        delete defense;
    }
    int getHealth()
	 { return *health; }
    int getAttackPower() 
	 { return *attackPower; }
    int getDefense() 
	{ return *defense; }
    void setHealth(int h) 
	{ *health = h; }
    void setAttackPower(int a) 
	{ *attackPower = a; }
    void setDefense(int d) 
	{ *defense = d; }
    void display() const {
        cout << "Health: " << *health
             << ", Attack Power: " << *attackPower
             << ", Defense: " << *defense << endl;
    }
};
int main() {
    Character c1;                
    Character c2(150, 70, 40);   
    Character c3(c2);            

    cout << "Character 1: "; c1.display();
    cout << "Character 2: "; c2.display();
    cout << "Character 3 (copy of c2): "; c3.display();
    c1.setHealth(120);
    c1.setAttackPower(60);
    c1.setDefense(35);
    cout << "Character 1 after update: "; c1.display();
    return 0;
}
