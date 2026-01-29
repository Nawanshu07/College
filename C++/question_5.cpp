//Program to find whether a number is prime or not
#include <iostream>
using namespace std;
int main() {
    int x;
    int p = 0, i ; 
    cout << "Enter a number: ";
    cin >> x;
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            p = 1;
            break;
        }
    } 
    if (p == 0) {
        cout << "The number is prime.\n";
    } else {
        cout << "The number is not prime.\n";
    }

    return 0;

}