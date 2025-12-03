#include <iostream>
using namespace std;

class student{
    private:
        int age=33;
        string name;
    protected:
        float height;
    public:
        int rollno;

        void setter(int b){ //stores
            age=b;
        };

       int getter(){      //prints
        return age;
       };

};

int main(){

    student s1;
    cout<<s1.getter()<<endl;

    s1.setter(5);

    cout<<s1.getter();
    
    
}