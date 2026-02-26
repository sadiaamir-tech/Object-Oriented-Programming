#include<iostream>
#include<string>
using namespace std;

class bookType {
    string title;
    int noa;
    string authors[4];
    string publisher;
    int ISBN;
    int price;
    int noc;

public:
    // Title
    void showtitle() {
        cout << "\nThe title of the book is: " << title << endl;
    }
    void settitle(string title) {
        this->title = title;
    }
    void checktitle(string title) {
        if(title == this->title)
            cout << "\nYes, the title is same as the actual title of the book" << endl;
        else
            cout << "\nNo, the title is not same as the actual title of the book" << endl;
    }
    string gettitle() {
        return title;
    }
    int getnoa() {
        return noa;
    }
    void setnoa(int noa) {
        this->noa = noa;
    }

    // No of copies
    void shownoc() {
        cout << "\nThe no. of copies of the book are: " << noc << endl;
    }
    void setnoc(int noc) {
        this->noc = noc;
    }
    void updatenoc(int noc) {
        this->noc = noc;
    }
    int getnoc() {
        return noc;
    }

    // Publisher
    void showpublisher() {
        cout << "\nThe publisher of the book is: " << publisher << endl;
    }
    void setpublisher(string pub) {
        this->publisher = pub;
    }
    void updatepublisher(string pub) {
        this->publisher = pub;
    }
    string getpublisher() {
        return publisher;
    }

    // ISBN
    void showISBN() {
        cout << "\nThe ISBN of the book is: " << ISBN << endl;
    }
    void setISBN(int isbn) {
        this->ISBN = isbn;
    }
    void updateISBN(int isbn) {
        this->ISBN = isbn;
    }
    int getISBN() {
        return ISBN;
    }

    // Price
    void showprice() {
        cout << "\nThe price of the book is: " << price << endl;
    }
    void setprice(int price) {
        this->price = price;
    }
    void updateprice(int price) {
        this->price = price;
    }
    int getprice() {
        return price;
    }

    // Authors (pointer free)
    void showauthors() {
        for(int i=0; i<noa; i++) {
            cout << "\nThe author of the book is: " << authors[i] << endl;
        }
    }

    // Set authors using initializer list (no temporary array)
    void setauthors(string a0, string a1, string a2, string a3) {
        authors[0] = a0;
        authors[1] = a1;
        authors[2] = a2;
        authors[3] = a3;
        noa = 4; // set number of authors
    }

    void updateauthors(string a0, string a1, string a2, string a3) {
        setauthors(a0,a1,a2,a3);
    }
};

int main() {
    bookType b1[100];

    b1[0].settitle("Aladdin");
    b1[0].setpublisher("Iqra publishers");
    b1[0].setprice(500);
    b1[0].setnoc(100);
    b1[0].setISBN(160);
    b1[0].setauthors("Ali","Sara","Bob","Alice");

    b1[1].settitle("Snow White");
    b1[1].setpublisher("Kamran publishers");
    b1[1].setprice(300);
    b1[1].setnoc(50);
    b1[1].setISBN(112);
    b1[1].setauthors("Rimsha","Ayesha","Maheen","Laiba");

    b1[2].settitle("Tangled");
    b1[2].setpublisher("Habib publishers");
    b1[2].setprice(20);
    b1[2].setnoc(20);
    b1[2].setISBN(30);
    b1[2].setauthors("Bilal","Khadija","Habib","Bushra");

    for(int i=0; i<3; i++) {
        if(b1[i].gettitle() == "Tangled" && b1[i].getISBN() == 30) {
            b1[i].showtitle();
            b1[i].showpublisher();
            b1[i].showprice();
            b1[i].shownoc();
            b1[i].showISBN();
            b1[i].showauthors();
            break;
        }
    }
    b1[2].updatenoc(200);
    cout << "\nThe number of copies of the book 'Tangled' after changing is: " << b1[2].getnoc() << endl;

    return 0;
}
