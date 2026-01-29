#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter the number:";
    cin>>x;

    for (int i = 1; i < 11; i++)
    {
        cout<< x <<" X " << i << " = "<< i*x;
        cout<<"\n";
    }
    


    return 0;
}