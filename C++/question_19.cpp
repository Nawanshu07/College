#include <iostream>
using namespace std;

int largest(int a , int b){
    if (a>b)
    {
        return a;
    }
    else
        return b;
}
int main() {
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<"The largest of "<<a<<" and "<<b<<" is "<<largest(a,b);
    
    return 0;
}