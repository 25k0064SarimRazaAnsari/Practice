#include <iostream>
using namespace std;

class student{
    private:
        string name;
        int age;
        int rollno;
    protected:
        string dep;
    public:
        void nameSetter(string a){
            name=a;
        };

        string nameGetter(){
            return name;
        }

        void ageSet(int a){
            age=a;
        }
        int ageGet(){
            return age;
        }

        void depSet(string a){
            dep=a;
        };
        string depGet(){
            return dep;
        }

};


int main(){
    student s1;
    string name , dep;
    int age;
    cout<<"Enter name :";
    cin>>name;
    s1.nameSetter(name);
    cout<<s1.nameGetter();

    cout<<"Enter age :";
    cin>>age;
    s1.ageSet(age);
    cout<<s1.ageGet();

    cout<<"Enter dep :";
    cin>>dep;
    s1.depSet(dep);
    cout<<s1.depGet();




    
}