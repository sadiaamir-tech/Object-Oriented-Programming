#include <iostream>
using namespace std;

class Media {
public:
    string title;

    void borrow() {
        cout << title << " borrowed\n";
    }

    void returnItem() {
        cout << title << " returned\n";
    }

    void display() {
        cout << "Title: " << title << endl;
    }
};

class BookInfo {
public:
    string author;
};

class MagazineInfo {
public:
    int issue;
};

class DVDInfo {
public:
    string director;
};

class Book : virtual public Media, public BookInfo {
public:
    void show() {
        display();
        cout << "Author: " << author << endl;
    }
};

class Magazine :virtual public Media, public MagazineInfo {
public:
    void show() {
        display();
        cout << "Issue: " << issue << endl;
    }
};

class DVD :virtual public Media, public DVDInfo {
public:
    void show() {
        display();
        cout << "Director: " << director << endl;
    }
};

int main() {
    Book b;
    b.title = "C++";
    b.author = "Ali";

    Magazine m;
    m.title = "Tech";
    m.issue = 10;

    DVD d;
    d.title = "Movie";
    d.director = "Ahmed";

    b.show();
    m.show();
    d.show();

    return 0;
}
