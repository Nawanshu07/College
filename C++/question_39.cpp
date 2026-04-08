#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout;
    ifstream fin;
    int x = 0;
    int roll;
    string name;
    int marks;

    fout.open("student.txt");

    while (x == 0){
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter marks:";
        cin>>marks;
        fout<<roll<<" "<<name<<" "<<marks<<endl;
        cout<<"Enter 0 to add more:";
        cin>>x;
    }

    fout.close();

    fin.open("student.txt");

    // while(fin>>roll>>name>>marks){
    //     cout<<roll<<" "<<name<<" "<<marks<<endl;
    // }

    while (!fin.eof())
    {
        cout<<roll<<" "<<name<<" "<<marks<<endl;
        fin>>roll>>name>>marks;
    }
    
    fin.close();
    
    
    return 0;
}