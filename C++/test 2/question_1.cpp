//WAP 

#include <iostream>
using namespace std;

class Teacher{
    private:
        int id;
        string name;
        string sub;
    public:
        void input(){
            cout<<"Enter id , name and sub:";
            cin >> id >> name >> sub;
        }

        void display(){
            cout<<"id :"<<id;
            cout<<"\nName :"<<name;
            cout<<"\nsubject :"<<sub;
            
        }
};

int main() {

    Teacher t1;
    t1.input();
    t1.display();

    return 0;
}