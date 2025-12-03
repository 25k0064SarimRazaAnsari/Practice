#include <iostream>
using namespace std;


class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "This constructor method Runs Automatically when object is called!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  myObj;
  return 0;
}