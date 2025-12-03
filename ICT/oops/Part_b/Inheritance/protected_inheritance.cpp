#include <iostream>
using namespace std;

class Parent {
private:
    int privateVar = 1;
protected:
    int protectedVar = 2;
public:
    int publicVar = 3;

    void showBase() {
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

class Child : protected Parent {
public:
    void showDerived() {
        // cout << privateVar; // ❌ Error: private not accessible
        cout << "Protected in Derived: " << protectedVar << endl; // ✅ OK
        cout << "Public in Derived (became protected): " << publicVar << endl; // ✅ OK
    }
};

int main() {
    Child children ;
    Parent p1;
    children.showDerived();


    // cout << children.protectedVar; // ❌ Error: protected not accessible outside
    // cout << children.publicVar;

    // cout << children.publicVar;    // ❌ Error: public became protected
    return 0;
}
