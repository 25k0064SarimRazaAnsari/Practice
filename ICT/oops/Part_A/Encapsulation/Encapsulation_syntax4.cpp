#include <iostream>
using namespace std;

// ============== How to Create Class and Its Object ===========

// creating a class
class mehak {

public:
    int public_var = 22;        // public variable

private:
    int private_var = 44;       // private variable

protected:
    int protected_var = 33;     // protected variable
};

int main() {

    // creating its object
    mehak mehakObj;

    // Accessing public variable directly
    cout << "Public variable: " << mehakObj.public_var << endl;

    // Private and protected cannot be accessed directly:
    // cout << mehakObj.private_var;   // ❌ error
    cout << mehakObj.protected_var; // ❌ error

    return 0;
}
