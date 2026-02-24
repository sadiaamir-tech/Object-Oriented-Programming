#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class HittingGame {
private:
    int totalPlayers;
    int yourHits;
    int enemyHits;
public:
    HittingGame() {
        srand(time(0)); 
        totalPlayers = rand() % 5 + 1;  
        yourHits = 0;
        enemyHits = 0;
    }
    void playGame() {
        cout << "Total No. Of Players in your team: " << totalPlayers << endl;
        for(int i = 0; i < totalPlayers; i++) {
            int num1 = rand() % 5 + 1;
            int num2 = rand() % 5 + 1;
            cout << "\nPair of numbers:" << endl;
            cout << "Number1: " << num1 << endl;
            cout << "Number2: " << num2 << endl;
            if(num1 == num2) {
                cout << "Enemy got hit by your team!" << endl;
                yourHits++;
            }
            else {
                cout << "You got hit by the enemy team!" << endl;
                enemyHits++;
            }
        }
        cout << "\nGame Over!" << endl;

        if(yourHits > enemyHits)
            cout << "You won!" << endl;
        else if(enemyHits > yourHits)
            cout << "Enemy won!" << endl;
        else
            cout << "Match Draw!" << endl;
    }
};
int main() {
    HittingGame game;   
    game.playGame();    
    return 0;
}
