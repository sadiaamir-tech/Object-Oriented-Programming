#include <iostream>
using namespace std;

class LibraryMember {
private:
    const int memberId;          
    string memberName;           
    int booksIssued;             

    static int totalMembers;     
    static const int maxBooks = 5; 

public:
        LibraryMember(int id, string name)
        : memberId(id), memberName(name), booksIssued(0)
    {
        totalMembers++;
        cout << "Constructor called for Member ID: " << memberId << endl;
    }
       void issueBook() {
        if (booksIssued < maxBooks) {
            booksIssued++;
            cout << "Book issued to " << memberName << endl;
        } else {
            cout << "Cannot issue more than " << maxBooks << " books to " << memberName << endl;
        }
    }
    void display() const {
        cout << "\nMember ID: " << memberId << endl;
        cout << "Member Name: " << memberName << endl;
        cout << "Books Issued: " << booksIssued << endl;
    }
    static int getTotalMembers() {
        return totalMembers;
    }
   void setName(string name) {
        memberName = name;
    }
};
int LibraryMember::totalMembers = 0;

int main() {

    LibraryMember m1(1, "Ali");
    LibraryMember m2(2, "Ahmed");

    m1.issueBook();
    m1.issueBook();

    m1.display();
    m2.display();

    cout << "\nTotal Members: " << LibraryMember::getTotalMembers() << endl;

    return 0;
}
