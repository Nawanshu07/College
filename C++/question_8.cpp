//find average of n number with while loop
#include <iostream>
using namespace std;
int main(){
    int x = 0;
    int sum = 0, count = 0 ,  n;

    while (x == 0)
    {
        cout <<"Enter a number:";
        cin >> n;
        count++;
        sum = sum + n;
        cout<<"Enter 0 to add more:";
        cin >> x;
    }

    float average = (float)sum / count;
    cout << "The average is: " << average;
    return 0;
}