#include <iostream>
using namespace std;

int main()
{
    int a, b = 2;
    cout << "Enter a number:";
    cin >> a;

    try
    {
        if (a == 0)
        {
            throw b;
        }
        else if (a == 10)
        {
            throw 'E';
        }
        else if (a == 100)
        {
            throw 2.5;
            }
        }
        catch(int x){
            cout<< x << "is an integer";
        }
        catch(char q){
            cout<< q << "is a character";
        }
        catch(double c){
            cout<< c << "is a double";
        }

    return 0;
}