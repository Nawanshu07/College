#include <iostream>
using namespace std;
class A
{
private:
    void display2()
    {
        cout << "I am private class";
    }

public:
    int x = 2;

protected:
    void display()
    {
        cout << "I am in class A";
        cout << "x = " << x;
    }
};
class B:public A{
    public:
    int a = 4;
    void display3(){
        cout<<"a = "<<a;
        cout<<"I am in class B";
    }
};

int main()
{
A o2;
B o1;
o1.display3();



    return 0;
}