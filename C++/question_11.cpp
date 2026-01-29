#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num , count = 0 , x , sum = 0 , m;
    cout<<"Enter a number:";
    cin>>num;

    x = num;

    while (x > 0)
    {
        count++;
        x = x/10;
    }
    
    x = num;

    while (x > 0)
    {
        m = x%10;
        sum = sum + pow(m,count);
        x = x/10;
    }

    if (sum == num)
    {
        cout<<"The number "<<num<<" is Armstrong";
    }
    else{
        cout<<"The number "<<num<<"is not Armstrong";
    }
    
    return 0;
}