#include <iostream>
using namespace std;

class student{
    public:
    int roll;
    string name;
    student(int r, string n){
        roll = r;
        name = n;
    }
};

class marks{
    public:
    int marks1 , marks2;
    marks(int m1 , int m2){
        marks1 = m1;
        marks2 = m2;
    }
};

class result: public student, public marks{
    public:
    int total;
    result(int r, string n, int m1, int m2): student(r, n), marks(m1, m2){}
    void calculate(){
        total = marks1 + marks2;
    }
    void display(){
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
        cout<<"Total: "<<total<<endl;
    }
};

    

int main() {
    result r1(1,"Nawanshu",100,100);
    r1.calculate();
    r1.display();
    
    return 0;
}