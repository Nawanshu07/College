//wap to convert temperature form celcius to farhenite

#include <iostream>
using namespace std;

int main() {
    float c, f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (c * 9/5) + 32;
    cout << "Temperature in Fahrenheit: \n" << f;
    return 0;
}