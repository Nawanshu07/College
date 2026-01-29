#include <iostream>
using namespace std;

int main() {
    int num , f = 1 , a = 1;
    cout<<"Enter a number:";
    cin>>num;
    x:
        f = a*f;
        a++;
        if (a <= num)
        {
            goto x;
        }
        cout<<"Fatorial = "<<f;
    return 0;
}