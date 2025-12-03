#include <iostream>
using namespace std;

// Parent class (Base Class)
class Parent {
public:
    void displayParent() {
        cout << "This is Parent class." << endl;
    }
};

// Child class (Derived Class)
class Child : public Parent {   // Inheritance
public:
    void displayChild() {
        cout << "This is Child class." << endl;
    }
};

int main() {
    Child children;

    children.displayParent(); // Parent class function
    children.displayChild();  // Child class function

    return 0;
}
