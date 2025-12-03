#include <iostream>
using namespace std;

// Base class
class Student {
private:
    int private_var = 101;       // private: sirf Student ke liye
protected:
    int protected_var = 85;            // protected: Student aur ChildStudent me accessible
public:
    string public_var = "Ali";       // public: sab jagah accessible

    void showStudent() {
        cout << " (private): " << private_var << endl;
        cout << "(protected): " << protected_var << endl;
        cout << " (public): " << public_var << endl;
    }
};

// Derived class
class ChildStudent : public Student {
public:

    void showChild() {
        // cout << private_var;   // ❌ private member not accessible
        cout << "Marks from ChildStudent protected: " << protected_var << endl;  // ✅ protected accessible
        cout << "Name from ChildStudent public : " << public_var << endl;    // ✅ public accessible
        showStudent();

       
    }
};

int main() {
    ChildStudent cs;

    cout << "Access via ChildStudent object:" << endl;
    cs.showChild();
    cs.public_var;

    

    cout << "\nAccess via Student method:" << endl;
    cs.showStudent();  // inherited public method, private variable bhi show kar deta hai

    // cout << cs.protected_var; // ❌ Error: protected not accessible from main
    cout << "Accessing public name from main: " << cs.public_var << endl; // ✅ Public is accessible

    return 0;
}
