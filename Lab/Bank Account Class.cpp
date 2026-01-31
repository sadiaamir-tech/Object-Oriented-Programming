#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance = 0;     
    int transactions = 0;    
    double interestRate = 0.05;  
    
public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactions++;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactions++;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Invalid or insufficient balance.\n";
        }
    }

    double getBalance() {
        return balance;
    }

    int getTransactions() {
        return transactions;
    }
    
    double calculateInterest() {
        return balance * interestRate;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    do {
        cout << "\n--- ABC Bank Menu ---\n";
        cout << "1. Display account balance\n";
        cout << "2. Display number of transactions\n";
        cout << "3. Display interest earned for this period\n";
        cout << "4. Make a deposit\n";
        cout << "5. Make a withdrawal\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Current Balance: " << account.getBalance() << endl;
            break;

        case 2:
            cout << "Number of Transactions: "
                 << account.getTransactions() << endl;
            break;

        case 3:
            cout << "Interest Earned: "
                 << account.calculateInterest() << endl;
            break;

        case 4:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 5:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 6:
            cout << "Thank you for using ABC Bank.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}

