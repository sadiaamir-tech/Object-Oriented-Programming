#include <iostream>
using namespace std;

class BookInfo {
    string title, author;
public:
    BookInfo(string t="", string a="") : title(t), author(a) {}
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
    void display() { cout << "Title: " << title << ", Author: " << author << endl; }
};

class LibraryRecord {
    int bookID;
    bool availabilityStatus;
public:
    LibraryRecord(int id=0, bool status=true) : bookID(id), availabilityStatus(status) {}
    void setBookID(int id) { bookID = id; }
    void setStatus(bool s) { availabilityStatus = s; }
    int getBookID() { return bookID; }
    bool getStatus() { return availabilityStatus; }
    void display() { cout << "BookID: " << bookID << ", Available: " << (availabilityStatus?"Yes":"No") << endl; }
};

class EBook : public BookInfo, public LibraryRecord {
    double fileSize;
public:
    EBook(string t, string a, int id, bool status, double fs)
        : BookInfo(t,a), LibraryRecord(id,status), fileSize(fs) {}
    void setFileSize(double fs) { fileSize = fs; }
    double getFileSize() { return fileSize; }
    double computeDownloadTime() { return fileSize / 5.0; }
    void display() {
        BookInfo::display();
        LibraryRecord::display();
        cout << "File Size: " << fileSize << " MB" << endl;
        cout << "Download Time: " << computeDownloadTime() << " seconds" << endl;
    }
};

int main() {
    EBook ebook("OOP Concepts", "Sadia", 101, true, 25.0);
    ebook.setTitle("Advanced OOP");
    ebook.setBookID(202);
    ebook.setFileSize(50.0);
    ebook.display();
    return 0;
}

