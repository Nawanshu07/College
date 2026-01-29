#include <iostream>
using namespace std;

float intrest(float p, float t, float r = 4){
    float i = p * r * t /100;
    return i;
}

int main() {
    float p1, r1 , t1;
    cout<<"Enter the principal , rate and time:";
    cin>>p1>>r1>>t1;

    cout<<intrest(p1,t1,r1);
    cout<<"\n";
    float i = intrest(p1 , t1);
    cout<<"simple interest:"<<i;
    return 0;
}