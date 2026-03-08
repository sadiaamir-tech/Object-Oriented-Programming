#include <iostream>
using namespace std;
class Account {
private:
    int account_no;
    float account_bal;
    int security_code;
    static int count;  
public:
    Account(int no, float bal, int code) {
        account_no = no;
        account_bal = bal;
        security_code = code;
        count++;
    }
    void display() const {
        cout << "Account No: " << account_no << endl;
        cout << "Balance: " << account_bal << endl;
        cout << "Security Code: " << security_code << endl;
        cout<<endl;
    }
    static void showCount() {
        cout << "Total Objects: " << count << endl;
    }
};
int Account::count = 0;
int main() {
    Account a1(101, 5000, 1234);
    Account a2(102, 8000, 5678);
    a1.display();
    a2.display();
    Account::showCount();
    return 0;
}
