#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account() {
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    Account(double b) {
        balance = b;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class InterestAccount : virtual public Account {
protected:
    double interest; 

public:
    InterestAccount(double b, double i = 30) : Account(b) {
        interest = i;
    }

    void deposit(double amount)  {
        double bonus = amount * (interest / 100);
        balance += amount + bonus;
        cout << "Deposited with interest: " << amount + bonus << endl;
    }
};

class ChargingAccount : virtual public Account {
protected:
    double fee;
     
public:
    ChargingAccount(double b, double f = 25) : Account(b) {
        fee = f;
    }
  void withdraw(double amount) {
        double total = amount + fee;

        if (total <= balance) {
            balance -= total;
            cout << "Withdrawn: " << amount << " (Fee: " << fee << ")\n";
        } else {
            cout << "Insufficient balance including fee!\n";
        }
        }
 
};

class ACI : public InterestAccount, public ChargingAccount {
public:

    ACI(double b) : Account(b), InterestAccount(b), ChargingAccount(b) {}

    void transfer(double amount, Account &acc) {
        if (amount <= InterestAccount::balance) {
            InterestAccount::balance -= amount;
            acc.deposit(amount);
            cout << "Transferred to Account\n";
        } else {
            cout << "Transfer failed!\n";
        }
    }

    void transfer(double amount, InterestAccount &acc) {
        if (amount <= InterestAccount::balance) {
            InterestAccount::balance -= amount;
            acc.deposit(amount);
            cout << "Transferred to InterestAccount\n";
        } else {
            cout << "Transfer failed!\n";
        }
    }

    void transfer(double amount, ChargingAccount &acc) {
        if (amount <= InterestAccount::balance) {
            InterestAccount::balance -= amount;
            acc.deposit(amount);
            cout << "Transferred to ChargingAccount\n";
        } 
        else{
        	cout<<"Transfer fail";
		}
    }
};

int main() {
    cout << "\n--- Creating Accounts ---\n";

    Account acc1(1000);
    InterestAccount ia(1000);
    ChargingAccount ca(1000);
    ACI aci(2000);

    cout << "\n--- Testing Deposit ---\n";
    ia.deposit(500);

    cout << "\n--- Testing Withdraw ---\n";
    ca.withdraw(200);

    cout << "\n--- Testing Transfer ---\n";
    aci.transfer(300, acc1);
    aci.transfer(200, ia);
    aci.transfer(100, ca);

    cout << "\n--- Final Balances ---\n";
    acc1.checkBalance();
    ia.checkBalance();
    ca.checkBalance();

    return 0;
}
