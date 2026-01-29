//WAP to input a character and check whether it is vowel or consonant.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "It is a vowel.\n";
        break;
    default:
        cout << "It is a consonant.\n";
        break;

        return 0;
    }
}