#include <iostream>
using namespace std;

class mother{
    public:
        void display1(){
            cout<<"I am mother"<<endl;
        }
};

class father{
    public:
        void display2(){
            cout<<"I am father"<<endl;
        }
};

class child:public mother, public father{
    public:
        void display3(){
            cout<<"I am child"<<endl;
        }
};

int main() {
    child c;
    c.display1();
    c.display2();
    c.display3();

    return 0;
}