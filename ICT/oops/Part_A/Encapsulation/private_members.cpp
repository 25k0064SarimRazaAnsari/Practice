#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter functions
    void setName(string n) { name = n; }
    void setAge(int a) { if(a > 0) age = a; }

    // Getter functions
    string getName() { return name; }
    int getAge() { return age; }

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;

    // Direct access NOT allowed: s1.name = "Ali"; // ❌ error
    s1.setName("Ali");
    s1.setAge(20);

    cout << s1.getName() << " is " << s1.getAge() << " years old." << endl;
    s1.introduce();
}
