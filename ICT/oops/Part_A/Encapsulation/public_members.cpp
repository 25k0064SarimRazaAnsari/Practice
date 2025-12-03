#include <iostream>
using namespace std;

// Class with public members
class Student {
public:
    string name;  // public variable
    int age;      // public variable

    // public function
    void introduce() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create object
    Student s1;

    // Directly access public members
    s1.name = "Ali";
    s1.age = 20;

    // Call function
    s1.introduce();

    return 0;
}
