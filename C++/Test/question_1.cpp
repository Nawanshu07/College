#include <iostream>
using namespace std;

int main() {
    int a , b , c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    int largest = 0;

    if (a>b && a>b)
    {
        largest = a;
    }
    else if (b>a && b >c)
    {
        largest = b;
    }
    else{
        largest = c;
    }

    cout<<"The largest of "<<a<<","<<b<<" and "<<c<<" is "<<largest;



    return 0;
}