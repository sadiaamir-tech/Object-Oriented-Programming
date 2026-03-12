#include <iostream>
using namespace std;

class Author {
private:
    string name;
    string email;
    char gender;

public:
    // Constructor
    Author(string n = "", string e = "", char g = 'M') {
        name = n;
        email = e;
        gender = g;
    }

    // Accessors
    string getName() { return name; }
    string getEmail() { return email; }
    char getGender() { return gender; }

    // Print author details
    void printAuthor() {
        cout << "Name: " << name << ", Email: " << email << ", Gender: " << gender << endl;
    }
};

class Book {
private:
    string title;
    string ISBN;
    Author authors[10]; // Array to store up to 10 authors
    int authorCount;    // Number of authors added

public:
    // Constructor
    Book(string t = "", string isbn = "") {
        title = t;
        ISBN = isbn;
        authorCount = 0;
    }

    // Add an author
    void addAuthor(Author &a) {
        if (authorCount < 10) {
            authors[authorCount] = a;
            authorCount++;
        } else {
            cout << "Cannot add more authors!" << endl;
        }
    }

    // Print book details
    void printBook() {
        cout << "Book Title: " << title << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Authors:" << endl;
        for (int i = 0; i < authorCount; i++) {
            cout << "Author " << i+1 << ": ";
            authors[i].printAuthor();
        }
    }
};
int main() {
    // Create authors
    Author author1("J.K. Rowling", "jkrowling@example.com", 'F');
    Author author2("John Doe", "johndoe@example.com", 'M');

    // Create a book
    Book book1("Magic Tales", "ISBN12345");

    // Add authors to the book
    book1.addAuthor(author1);
    book1.addAuthor(author2);

    // Print book details
    book1.printBook();

    return 0;
}
