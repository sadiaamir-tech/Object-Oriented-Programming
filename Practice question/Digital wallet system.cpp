#include <iostream>
using namespace std;

class DigitalWallet {
private:
    int balance = 0;
    int transactionCount = 0;
    int transactionHistory[100];   

public:
    void addMoney(int amount) {
        if (amount > 0) {
            balance += amount;
            transactionHistory[transactionCount] = amount;
            transactionCount++;
        }
    }

    void pay(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactionHistory[transactionCount] = -amount;
            transactionCount++;
        }
    }

    int getBalance() {
        return balance;
    }
    int getTransactionCount() {
        return transactionCount;
    }

    void printStatement() {
        cout << "\nTransaction History:\n";
        for (int i = 0; i < transactionCount; i++) {
            if (transactionHistory[i] > 0)
                cout << "Added: " << transactionHistory[i] << endl;
            else
                cout << "Paid: " << -transactionHistory[i] << endl;
        }
    }
};

int main() {
    DigitalWallet wallet;

    wallet.addMoney(500);
    wallet.addMoney(300);
    wallet.pay(200);
    wallet.pay(700);   

    cout << "Current Balance: " << wallet.getBalance() << endl;
    cout << "Total Transactions: " << wallet.getTransactionCount() << endl;

    wallet.printStatement();

    return 0;
}

