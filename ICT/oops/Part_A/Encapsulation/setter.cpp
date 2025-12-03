#include <iostream>
using namespace std;

class Student {
private:
    int age;   // private variable

public:
    // Simple setter
    void setAge(int a) {
        age = a;   // directly assign
    }

    // Getter
    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    s1.setAge(30);        // set value directly
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}
