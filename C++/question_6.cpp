//program to find factorial of a number 
#include <iostream>
using namespace std;

int main(){
    int f = 1 , num;
    cout<<"Enter a number:";
    cin>>num;

    for (int i = 2; i < num+1; i++)
    {
        f = f * i;
    }
    
    cout<<"\nThe factorial of "<<num<<"is"<<f;

    return 0;
}