#include <iostream>
#include <string>
using namespace std;
class Item {
protected:
    string name;
    int quantity;
public:
    void input() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter quantity: ";
        cin >> quantity;
    }
};
class BakedGoods : public Item {
protected:
    float discount = 0.10; 
};
class Cakes : public BakedGoods {
    int price = 600;
public:
    void bill() {
        input();
        float total = price * quantity;
        float finalBill = total - (total * discount);

        cout << "\nItem: " << name;
        cout << "\nPrice per item: " << price;
        cout << "\nTotal before discount: " << total;
        cout << "\nDiscount: 10%";
        cout << "\nFinal Bill: " << finalBill << endl;
    }
};
class Bread : public BakedGoods {
    int price = 200;

public:
    void bill() {
        input();
        float total = price * quantity;
        float finalBill = total - (total * discount);

        cout << "\nItem: " << name;
        cout << "\nPrice per item: " << price;
        cout << "\nTotal before discount: " << total;
        cout << "\nDiscount: 10%";
        cout << "\nFinal Bill: " << finalBill << endl;
    }
};
class Drinks : public Item {
    int price = 100;
    float discount = 0.05; 

public:
    void bill() {
        input();
        float total = price * quantity;
        float finalBill = total - (total * discount);

        cout << "\nItem: " << name;
        cout << "\nPrice per item: " << price;
        cout << "\nTotal before discount: " << total;
        cout << "\nDiscount: 5%";
        cout << "\nFinal Bill: " << finalBill << endl;
    }
};
int main() {
    int choice;

    cout << "1. Cake\n";
    cout << "2. Bread\n";
    cout << "3. Drink\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        Cakes c;
        c.bill();
    }
    else if (choice == 2) {
        Bread b;
        b.bill();
    }
    else if (choice == 3) {
        Drinks d;
        d.bill();
    }
    else {
        cout << "Invalid choice";
    }
    return 0;
}
