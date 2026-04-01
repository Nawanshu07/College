#include <iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout<<"I am parent";
        }
};

class B:public A{
    public:
        void show(){
            cout<<"I am child";
        }
};

int main() {

    B b1;
    A *ptr , a1;
    ptr = &a1;  
    ptr ->show();
    ptr = &b1;
    ptr->show();

    return 0;
}