#include <iostream>
using namespace std;

class Base {
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

class Derived : private Base {
public:
    void showDerived() {
        // cout << privateVar; // ❌ Error: private not accessible
        cout << "Protected in Derived (became private): " << protectedVar << endl; // ✅ OK
        cout << "Public in Derived (became private): " << publicVar << endl;       // ✅ OK
    }
};

int main() {
    Derived obj;
    obj.showDerived();

    cout << "Access from main:" << endl;
    // cout << obj.protectedVar; // ❌ Error: private in Derived
    // cout << obj.publicVar;    // ❌ Error: private in Derived
    return 0;
}
