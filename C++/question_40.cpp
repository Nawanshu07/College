#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    int n;
    int pos;
    string line;


    file.open("data.txt",ios::out);
    cout<<"Enter number of lines:";
    cin>>n;
    cin.ignore();

    cout<<"Enter text:\n";
    
    for(int i=0;i<n;i++)
    {
        string line;
        getline(cin,line);
        file<<line<<endl;
    }
    file.close();

    file.open("data.txt",ios::in);
    cout<<"Enter the position (bytes) to read from:";
    cin>>pos;
    file.seekg(pos, ios::beg);
    cout<<"Data from that position:\n";

    while (getline(file,line))
    {
        cout<<line<<endl;
    }
    
    file.close();

    return 0;
}