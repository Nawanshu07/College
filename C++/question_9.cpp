//program to take age of n people and find count number of peopele in age group 0-30 , 31-50 , 50-70 and above 70
#include <iostream>
using namespace std;
int main(){
    int x = 0;
    int age;
    int count30 = 0 , count50 = 0 , count70 = 0 , count100 = 0 ;
    while (x==0)
    {
        cout<<"Enter the age:";
        cin>> age;
        if (age>0 && age<=30)
        {
            count30++;
        }
        else if (age>30 && age<=50)
        {
            count50++;
        }
        else if (age>50 && age<=70)
        {
            count70++;
        }
        else if (age>70)
        {
            count100++;
        }
        
        cout<<"Enter 0 to add more:";
        cin>>x;
    }

    cout<<"\n0 - 30:"<<count30;
    cout<<"\n31 - 50:"<<count50;
    cout<<"\n51 - 70:"<<count70;
    cout<<"\nabove 70:"<<count100;

    return 0;
}
    