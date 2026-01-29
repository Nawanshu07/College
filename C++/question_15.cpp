#include <iostream>
using namespace std;

void exchange(int &x , int &y){
    int z;
    z = x;
    x = y;
    y = z;
   
}
int main() {
    int a = 10 , b = 20;
    cout<<"Before exchange: a = "<< a << " b = "<<b;
    cout<<"\n";
    exchange(a,b);

    cout<<"\nAfter exchange: a = "<< a << " b = "<<b;
    return 0;
}  