#include <iostream>
using namespace std;

class Tool {
protected:
    int strength;
    char type;

public:
    Tool(int s = 0, char t = ' ') {
        strength = s;
        type = t;
    }

    void setStrength(int s) {
        strength = s;
    }

    int getStrength() {
        return strength;
    }

    char getType() {
        return type;
    }

    virtual bool fight(Tool &t) = 0;
};

class Rock : public Tool {
public:
    Rock(int s) : Tool(s, 'r') {}

    bool fight(Tool &t) {
        int myStrength = strength;

        if (t.getType() == 's')
            myStrength *= 2;
        else if (t.getType() == 'p')
            myStrength /= 2;

        return myStrength > t.getStrength();
    }
};

// Paper Class
class Paper : public Tool {
public:
    Paper(int s) : Tool(s, 'p') {}

    bool fight(Tool &t) {
        int myStrength = strength;

        if (t.getType() == 'r')
            myStrength *= 2;
        else if (t.getType() == 's')
            myStrength /= 2;

        return myStrength > t.getStrength();
    }
};

// Scissors Class
class Scissors : public Tool {
public:
    Scissors(int s) : Tool(s, 's') {}

    bool fight(Tool &t) {
        int myStrength = strength;

        if (t.getType() == 'p')
            myStrength *= 2;
        else if (t.getType() == 'r')
            myStrength /= 2;

        return myStrength > t.getStrength();
    }
};

int main() {
    Rock r(10);
    Paper p(12);
    Scissors s(8);

    if (r.fight(s))
        cout << "Rock wins against Scissors" << endl;
    else
        cout << "Rock loses against Scissors" << endl;

    if (p.fight(r))
        cout << "Paper wins against Rock" << endl;
    else
        cout << "Paper loses against Rock" << endl;

    if (s.fight(p))
        cout << "Scissors wins against Paper" << endl;
    else
        cout << "Scissors loses against Paper" << endl;

    return 0;
}
