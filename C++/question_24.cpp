#include <iostream>

using namespace std;

class student {
public:
    int roll;
    float m1, m2, m3;
    string name;

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display() {
        cout << "Average: " << (m1 + m2 + m3) / 3;
    }
};

int main() {
    student s1, s2;

    s1.input();
    s1.display();

    s2.input();
    s2.display();

    return 0;
}
