#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    ifstream fin;
    string line;
    int n,i;

    fout.open("font.txt");

    cout<<"Enter number of lines:";
    cin>>n;
    cin.ignore();
    
    cout<<"Enter text:";
    for (int i = 0; i < n; i++)
    {
        getline(cin,line);
        fout<<line<<endl;
    }

    fout.close();

    fin.open("font.txt");

    cout<<"content of file:\n";
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    


    return 0;
}