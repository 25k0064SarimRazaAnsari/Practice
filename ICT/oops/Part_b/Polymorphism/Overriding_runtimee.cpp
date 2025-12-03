#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {   // overriding
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child children;
    Parent p1;
    children.show();   // Child version runs
    p1.show();

    return 0;
}
