#include <iostream>
using namespace std;
class BankAccount {
private:
    int balance = 0;  
public:
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    bool withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
            return false; 
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return false;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            return true;  
        }
    }
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(1000);             
    cout << "Current balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(500);            
    cout << "Current balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(600);             
    cout << "Current balance: " << myAccount.getBalance() << endl;
    return 0;
}
