//print n terms of Fibonacci series

#include<iostream>
using namespace std;
int main(){

    int a = 0 , b = 1 , c;
    int n;
    cout<<"Enter the value of n:";
    cin >> n;
    if (n==1)
    {
        cout<<a;
    }
    else if (n==2)
    {
        cout<<a<<b;
    }
    else{
        cout<<a<<" "<<b << " ";
          for (int i = 0; i < n-2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<< c <<" ";
    }
    }
    
  
    

    return 0;
}