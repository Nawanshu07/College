#include <iostream>
using namespace std;

void increse(int a[], int n){
    int i;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + 5;
    }
}
int main() {
    int x[5] = {1,2,3,4,5};

    cout<<"Array Before change:";
    for (int i = 0; i < 5; i++)
    {
        cout<< x[i] << " ";
    }
    
    increse(x,5);
cout<<"\n";
    cout<<"Array after change:";

    for (int i = 0; i < 5; i++)
    {
        cout<<x[i] << " " ;
    }
    
    return 0;
}