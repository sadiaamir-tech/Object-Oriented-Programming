#include <iostream>
using namespace std;
class Hotel {
private:
    string customerName;
    int days;
    const double rate;
public:
    Hotel(string name,int d) : rate(1000.85) {
        customerName = name;
        days = d;
    }
    double calculateRent() const {
        if(days > 7)
            return (days - 1) * rate;
        else
            return days * rate;
    }
    void display() const {
        cout<<"Customer Name: "<<customerName<<endl;
        cout<<"Days: "<<days<<endl;
        cout<<"Rent: "<<calculateRent()<<endl;
    }
};
int main() {
    Hotel h1("Ali",10);
    h1.display();
}
