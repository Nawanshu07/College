//WAP to accept a integer and check wheter it is odd or even
#include <iostream>
using namespace std;

int eo(int x){
    if (x % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
    
}
int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    if (eo(n))
    {
        cout<<n<<"is even";
    }
    else
        cout<<n<<"is odd";
    
    return 0;
}