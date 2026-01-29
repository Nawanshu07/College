#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n:";
    cin >> n;

float sum = 0;

for (int i = 1; i <= n; i++)
{
    sum = sum + 1.0 / i;
}
cout<<"Sum:"<<sum;

    return 0;
}