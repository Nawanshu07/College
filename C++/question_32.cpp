#include <iostream>
using namespace std;

class parent{
    int a;
    protected:
        int b;
    public:
        int c;
    
    parent(int l,int m,int n){
        a = l;
        b = m;
        c = n;
    }

    void display(){
        cout<<"a:"<<a;
    }
};

class child : public parent{
    public:
        int d;
        child(int p , int q , int r , int s):parent(p,q,r){
            d = s;
        }

        void display2(){
            cout<<"\nb:"<<b;
            cout<<"\nc:"<<c;
            cout<<"\nd:"<<d;
        }
};


int main() {
    child c1(1,2,3,4);
    c1.display();
    c1.display2();
   
    return 0;
}