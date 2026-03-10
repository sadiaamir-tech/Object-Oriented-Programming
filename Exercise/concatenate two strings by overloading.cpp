#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;
public:
    MyString(string s = "") : str(s) {
	}
    MyString operator + (const MyString& obj) {
        MyString temp;     
        temp.str = str + obj.str; 
        return temp;       
    }

    void display() {
        cout << str << endl;
    }
};
int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3 = s1 + s2; 
    s3.display();    
    return 0;
}
