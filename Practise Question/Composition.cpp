#include <iostream>
#include <string>
using namespace std;

class Author {
private:
    string name;
    string nationality;
public:
    Author(string n, string nat) {
        name = n;
        nationality = nat;
    }
    void displayAuthor() {
        cout << "Author: " << name << ", Nationality: " << nationality << endl;
    }
};

class Book {
private:
    string title;
    string ISBN;
    Author author;  // Composition
public:
    Book(string t, string i, string authorName, string authorNat)
        : title(t), ISBN(i), author(authorName, authorNat) {}  // Create Author inside Book

    void displayBook() {
        cout << "Book Title: " << title << ", ISBN: " << ISBN << endl;
        author.displayAuthor();
    }
};

int main() {
    Book b1("C++ Programming", "123-456-789", "Bjarne Stroustrup", "Danish");
    b1.displayBook();
    return 0;
}
