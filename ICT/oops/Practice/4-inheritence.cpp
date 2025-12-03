#include <iostream>
using namespace std;

class parent{
    public:
        int x = 1;
    protected:
        int y=2;
    private:
        int z=3;
};

class child: public parent{
    public:
    void show(){
        cout<<x;
        cout<<y;
        // cout<<z;
    }
};


int main(){

    child c1;

    c1.show();

}