//WAP to simple intrest
#include<iostream>
using namespace std;
int main(){
    float principal, rate, time, simple_interest;
    cout << "Enter principal , rate and time:";
    cin >> principal >> rate >> time;   
    
    simple_interest = (principal * rate * time) / 100;

    cout << "Simple Interest is: \n" << simple_interest;
    return 0;
}