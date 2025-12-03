#include <iostream>
using namespace std;

class cal{
    public: 
        int a;
        int b;
        int c;
        

      int add(int a, int b){
            return a+b;
        }
      int add(int a, int b,int c){
            return a+b+c;
        }
};

class parent{
    public:
    void show(){
        cout<<"this is parent"<<endl;
    }
};
class child : public parent{
    public:
    void show(){
        cout<<"This is child!"<<endl;
    }
};

int main(){
    cal c1;
    cout<<c1.add(8,7)<<endl;
    cout<<c1.add(8,7+15)<<endl;

    child a;
    parent p;
    p.show();
    a.show();
}