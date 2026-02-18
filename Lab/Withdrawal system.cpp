#include <iostream>
using namespace std;

int main()
{
    char accountType;
    int accountNumber;
    double withdrawAmount;
    double balance = 200000;
    double charge = 0, tax = 0;

    cout << "Enter account type (S for Savings, C for Current): ";
    cin >> accountType;

    if (accountType == 'S' || accountType == 's')
    {
        cout << "Enter savings account number: ";
        cin >> accountNumber;

        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;

        if (withdrawAmount > 100000)
        {
            cout << "Cannot withdraw more than 100,000." << endl;
            return 0;
        }

        balance -= withdrawAmount;

        charge = 0.02 * withdrawAmount;
        balance -= charge;

        if (withdrawAmount > 50000)
        {
            tax = 0.05 * withdrawAmount;
            balance -= tax;
        }

        cout << "Savings Account Withdrawal Successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
    else if (accountType == 'C' || accountType == 'c')
    {
        cout << "Enter current account number: ";
        cin >> accountNumber;

        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;

        if (withdrawAmount > 100000)
        {
            cout << "Cannot withdraw more than 100,000." << endl;
            return 0;
        }

        balance -= withdrawAmount;

        charge = 100;
        balance -= charge;

        if (withdrawAmount > 50000)
        {
            tax = 0.05 * withdrawAmount;
            balance -= tax;
        }
        cout << "Current Account Withdrawal Successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}
