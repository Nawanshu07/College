#include <iostream>
using namespace std;
class Shape{
protected:
    int l, b;

public:
    void input()
    {
        cout << "\nEnter length and breadth: ";
        cin >> l >> b;
    }
    void displayShape()
    {
        cout << "Triangle\n";
    }
};

class Rectangle : public Shape
{
public:
    void Area()
    {
        int area = l * b;
        cout << "\nArea of rectangle: " << area ;
    }
};

int main()
{
    Rectangle r;
    r.displayShape();
    r.input();
    r.Area();
    return 0;
}