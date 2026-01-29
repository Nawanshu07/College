#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"enter the value of n:";
    cin >> n;

    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int f = 1;
        for (int j= 1; j <= i; j++)
        {
            f = f * j;
        }
        sum = sum + (float)i/f;
    }
    cout<<"Sum:"<<sum;
    return 0;
}