#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) { name = n; }
};

class Student : public Person {
public:
    void showName() {
        cout << "Student name: " << name << endl;  // allowed: protected accessible in derived class
    }
};

int main() {
    Student s1;
    s1.setName("Mehak");
    s1.showName();
}
