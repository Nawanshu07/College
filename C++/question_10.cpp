//WAP for palindrome
#include <iostream>
using namespace std;

int main() {
    int num , x , pal = 0;
    int m1;

    cout<<"Enter a number:";
    cin>> num;
    x = num;

    while (x>0)
    {
        m1 = x%10;
        x = x/10;
        pal = pal * 10 + m1;
    }

    if (pal == num)
    {
        cout<<"the number "<<num<< " is palindrome";
    }else{
        cout<<"the number "<<num<< " is not palindrome";
    }
    
    
    return 0;
}