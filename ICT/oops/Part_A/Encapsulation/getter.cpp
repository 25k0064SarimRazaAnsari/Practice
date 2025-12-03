#include <iostream>
using namespace std;

class Student {
private:
    int age = 20;  // private variable

public:
    // Getter function
    int getAge() {
        return age;   // private variable ki value return kare
    }
};

int main() {
    Student s1;

    // Direct access possible nahi: s1.age → ❌
    // Getter ka use karke access karte hain
     s1.getAge();

    return 0;
}
