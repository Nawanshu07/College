//find roots of equation 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    float D = b * b - 4 * a * c;

    if (D == 0)
    {
        cout<<"Roots are real and equal.";
        float root = -b / (2 * a);
        cout << "Root is: \n" << root ;
    }
    else if (D > 0)
    {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are: " << root1 << " and " << root2;
    }
    else
    {
        cout << "\nNo real roots.\n";
    }
    
    return 0;
}