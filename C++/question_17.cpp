#include <iostream>
using namespace std;

int square(int a){
    return a * a;
}

int main() {
    int a;
    cout<<"Enter a integer:";
    cin>>a;

    cout<<"square of" <<a << "is" << square(a);
    
    return 0;
}