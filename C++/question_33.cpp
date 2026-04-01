#include <iostream>
using namespace std;

class person{
    public:
        string name;
        int age;
        person(string n , int a){
            name = n;
            age = a;
        }};

class student:public person{
    public:
        int roll;
        student(string n , int a , int r):person(n,a){
            roll = r;
        }
};

class result:public student{
    public:
        float marks;
        result(string n , int a , int r , float m):student(n,a,r){
            marks = m;
        }
        void display(){
            cout<<"Name:"<<name;
            cout<<"\nAge:"<<age;
            cout<<"\nRoll:"<<roll;
            cout<<"\nMarks:"<<marks;
        }
};

int main() {
    
    result r("Nawanshu", 18 , 69 , 100);
    r.display();
    
    return 0;
}