#include <iostream>
using namespace std;
class A
{
private:
    int a = 2;
protected:
    int b = 3;
public:
    int x = 2;
};

class B:public A{
    public:
    void display(){
        cout<<"b = "<<b;
        cout<<"x = "<<x;
    }
};

int main()
{
A o2;
B o1;
o1.display();

    return 0;
}