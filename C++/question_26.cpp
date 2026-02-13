#include <iostream>
using namespace std;

class student{
    public:
        int roll;
        string name;
        int marks;

        void put(){
            cout<<"Enter roll number: ";
            cin>>roll;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
        }

        void get(){
            cout<<"Roll number: "<<roll;
            cout<<"\nName: "<<name;
            cout<<"\nMarks: "<<marks;
}
};

int main() {
    student s[5];

    for(int i=0; i<5; i++){
        s[i].put();
    }

    for(int i=0; i<5; i++){
        s[i].get();
    }

    return 0;
}