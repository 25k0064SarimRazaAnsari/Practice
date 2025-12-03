#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
};

int main(){ 
    student s1;
    cout<<"Enter name of s1 :"<<endl;
    cin>>s1.name;
    cout<<"Enter age :"<<endl;
    cin>>s1.age;

    cout<<"the name is "<<s1.name<<endl;
    cout<<"age is  "<<s1.age;
}