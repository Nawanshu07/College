#include <iostream>
using namespace std;

class Parent{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    
        Parent(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }

};

class child:public Parent{
    public:
    child(): Parent(20,30,40){}
        void display(){
            cout<<"b :"<<b;
            cout<<"c :"<<c;
        }
};

int main() {

    Parent p(20,30,40);
    child c;

    c.display();

    return 0;
    
}