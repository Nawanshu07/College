#include <iostream>
using namespace std;

class Employee
{
private:
    float salary;
    int id;

public:
    Employee(float s, int i)
    {
        salary = s;
        id = i;
    }

    void increase(){
        salary = salary + (salary/10);
    }

    void display(){
        cout<<"Emp id:"<<id << endl;
        cout<<"Salary:" << salary;
    }
};


int main()
{

    Employee e1(10000,1);
    e1.increase();
    e1.display();

    return 0;
}


