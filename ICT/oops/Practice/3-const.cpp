#include <iostream>
using namespace std;

class student{
    public:
        int rollno;
        string name;
        int age;
    
    student(int x, string y , int z){
        rollno=x;
        name=y;
        age=z;
        cout<<"check"<<endl;
    }
};

class car{
    public:
        string name;
        int year;

    car(string x,int y);
};
 car::car(string x, int y){
    name=x;
    year=y;
 };

int main(){
    student s1(1,"sarim",17); //input

    cout<<s1.rollno<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    car c1("BMw",2017);
    cout<<c1.name<<endl;
    cout<<c1.year<<endl;
}