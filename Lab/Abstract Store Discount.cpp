#include <iostream>
using namespace std;

class Store {
protected:
    float total_bill;

public:
    Store(float bill) {
        total_bill = bill;
    }

    virtual void calculateBill() = 0;

};

class ImtiazStore : public Store {
public:
    ImtiazStore(float bill) : Store(bill) {}

    void calculateBill() override {
        float discount = total_bill * 0.07;   
        float finalBill = total_bill - discount;

        cout << "Imtiaz Store Final Bill: " << finalBill << endl;
    }
};

class BinHashimStore : public Store {
public:
    BinHashimStore(float bill) : Store(bill) {}

    void calculateBill() override {
        float discount = total_bill * 0.05;   
        float finalBill = total_bill - discount;

        cout << "Bin Hashim Store Final Bill: " << finalBill << endl;
    }
};

int main() {
    float bill;

    cout << "Enter total bill amount: ";
    cin >> bill;

    ImtiazStore imtiaz(bill);
    BinHashimStore binhashim(bill);

   
    Store* s1 = &imtiaz;
    Store* s2 = &binhashim;
    
    s1->calculateBill();
    s2->calculateBill();

    delete s1;
    delete s2;

    return 0;
}
