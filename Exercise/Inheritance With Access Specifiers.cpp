#include <iostream>
using namespace std;
class Base {
private:
    int privateInt;
protected:
    int protectedInt;
public:
    int publicInt;

    // methods
    void setPrivateInt(int val) { privateInt = val; }
    int getPrivateInt() { return privateInt; }

    void setProtectedInt(int val) { protectedInt = val; }
    int getProtectedInt() { return protectedInt; }

    void setPublicInt(int val) { publicInt = val; }
    int getPublicInt() { return publicInt; }
};

// Public Inheritance
class PublicChild : public Base {
public:
	  void setValues(int pvt, int prot, int pub) {
        setPrivateInt(pvt);
        setProtectedInt(prot);
        setPublicInt(pub);
    }
	void showValues() {
		   cout << "PublicChild access through getter: "
         << getPrivateInt() << ", "
         << getProtectedInt() << ", "
         << getPublicInt() << endl;
	}
    void show() {
        cout << "Access in PublicChild (public inheritance):" << endl;
        cout << "protectedInt = " << protectedInt << endl; // accessible
        cout << "publicInt = " << publicInt << endl;       // accessible
        // privateInt not accessible directly
    }
};

// Protected Inheritance
class ProtectedChild : protected Base {
public:
    void setValues(int pvt, int prot, int pub) {
        setPrivateInt(pvt);
        setProtectedInt(prot);
        setPublicInt(pub);
    }
    void showValues() {
        cout << "ProtectedChild access through getter: "
             << getPrivateInt() << ", "
             << getProtectedInt() << ", "
             << getPublicInt() << endl;
    }
    void show() {
        cout << "Access in ProtectedChild (protected inheritance):" << endl;
        cout << "protectedInt = " << protectedInt << endl; // accessible
        cout << "publicInt = " << publicInt << endl;       // accessible
    }
};

// Private Inheritance
class PrivateChild : private Base {
public:
    void setValues(int pvt, int prot, int pub) {
        setPrivateInt(pvt);
        setProtectedInt(prot);
        setPublicInt(pub);
    }
    void showValues() {
        cout << "PrivateChild access through getter: "
             << getPrivateInt() << ", "
             << getProtectedInt() << ", "
             << getPublicInt() << endl;
    }
    void show() {
        cout << "Access in PrivateChild (private inheritance):" << endl;
        cout << "protectedInt = " << protectedInt << endl; // accessible
        cout << "publicInt = " << publicInt << endl;       // accessible
    }
};

int main() {
    PublicChild pc;
    pc.setValues(1,2,3);
    pc.showValues();
    pc.show();

    ProtectedChild protc;
    protc.setValues(10, 20, 30);
    protc.showValues();
    protc.show();

    PrivateChild privc;
    privc.setValues(100, 200, 300);
    privc.showValues();
    privc.show();
    return 0;
}
