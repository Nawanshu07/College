#include <iostream>
using namespace std;

class person{
    public:
        string name;
        int age;
        person(string n , int a){
            name = n;
            age = a;
        }

        void display1(){
            cout<<"Name:"<<name;
            cout<<"\nAge:"<<age;
        }

};

class student:public person{
    public:
        int roll;
        student(string n, int a, int r) : person(n, a) {
            roll = r;
        }

        void display2() {
            cout << "\nRoll:" << roll;
        }

};

class Teacher:public person{
    public:
        int salary;
        Teacher(string n , int a , int s):person(n,a){
            salary = s;
        }

        void display3(){
            cout<<"\nSalary:"<<salary;
        }
};


int main() {
    
    student s1("Nawanshu" , 18 , 69);
    Teacher t1("SS" , 40 , 30000);

    s1.display1();
    s1.display2();
    
    t1.display1();
    t1.display3();

    return 0;
}