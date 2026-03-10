#include <iostream>
using namespace std;

class faculty{
    private:
        int f_id;
        string sub[3];
    
    public:
        void input(){
            cout<<"\nEnter id: ";
            cin >> f_id;
            cout<<"\nEnter 3 subjets:";
            for (int i = 0; i < 3; i++)
            {
                cin>>sub[i];
            }
        }

        void display(){
            cout<<"\nFaculty id:"<<f_id;
            for (int i = 0; i < 3; i++)
            {
                cout<<"\nSubject "<<i+1<<": "<<sub[i];
            }
            cout<<"\n";
        }
};

int main() {
    faculty f[5];
    for (int i = 0; i < 5; i++)
    {
        f[i].input();
        f[i].display();
    }
    
    return 0;
}