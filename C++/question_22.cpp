#include <iostream>
using namespace std;

int main() {
    int x , y , ch;
    m:
        cout<<"1 - Add | 2 - Sub | 3 - Exit:\n";
        cin>>ch;
        if (ch == 3)
        {
            goto end;
        }
        
        cout<<"\nEnter 2 number:";
        cin>>x>>y;
        if (ch == 1)
        {
            cout<<"\nSum = "<<x+y<<"\n";
        }
        else if(ch == 2){
            cout<<"\nDiff = "<<x-y<<"\n";
        }
        goto m;
        end:
            cout<<"\nThe End\n";
    return 0;
}