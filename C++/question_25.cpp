#include <iostream>
using namespace std;

class outer {
public:
    void display() {
        cout << "I am outer class" << endl;
    }

    class inner {
    public:
        void display() {
            cout << "I am inner" << endl;
        }
    };
};

int main() {
    outer o;
    outer::inner o2;

    o.display();
    o2.display();

    return 0;
}
