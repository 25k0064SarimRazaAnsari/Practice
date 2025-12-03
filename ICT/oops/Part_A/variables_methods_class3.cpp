#include <iostream>
using namespace std;

// creating a class
class mehak {
public:
    // variables (attributes)
    string name;
    int age;

    // function (method)
    void introduce() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    // creating its object
    mehak mehakObj;

    // assigning values to variables
    mehakObj.name = "Mehak";
    mehakObj.age = 25;

    // calling class function
    mehakObj.introduce();

    return 0;
}
