#include <iostream>
using namespace std;

class student {
public:
    int roll;
    string name;
    
    student(int r, string s) {
        roll = r;
        name = s;
    }

    void put() {
        cout << "Roll number: " << roll ;
        cout << "\nName: " << name ;
    }

    ~student() {
        cout << "\nDestructor called ";
    }
};

int main() {
    student s(1,"Nawanshu");
    s.put();

    return 0;
}