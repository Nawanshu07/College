#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    string line;
    char ch;
    
    file.open("data.txt",ios::in | ios::binary);
    if(!file){
        cout<<"File not found";
        return 0;
    }    

    cout<<"\nContent of file:\n";
    while(file.get(ch)){
        cout << ch;
    }

    file.close();

    cout<<"\nFile Random Access\n";
    
    file.open("data.txt" , ios::in | ios::binary );

    cout<<"\n";
    file.seekg(2,ios::beg );
    file.get(ch);
    cout<<"character at position " << file.tellg()  << ":"<< ch;

    cout<<"\n";
    file.seekg(4, ios::beg);
    file.get(ch);
    cout<<"character at position " << file.tellg()   << ":"<< ch;


    cout<<"\n";
    file.seekg(2, ios::cur);
    file.get(ch);
    cout<<"character at position " << file.tellg()   << ":"<< ch;


    cout<<"\n";
    file.seekg(14, ios::beg);
    file.get(ch);
    cout<<"character at position " << file.tellg()   << ":"<< ch;


    cout<<"\n";
    file.seekg(-2, ios::end);
    file.get(ch);
    cout<<"character at position " << file.tellg()   << ":"<< ch;

    file.close();

    
    return 0;
}