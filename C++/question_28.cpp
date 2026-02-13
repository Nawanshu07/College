#include <iostream>
using namespace std;

class demo{
    public:
        int x , y;
        void getdata(int x , int y){
            this->x = x;
            this->y = y;
        }

        void putdata(){
            cout<<"x = "<<x<<"y = "<<y;
        }
};

int main() {
    demo d;
    d.getdata(3,4);
    d.putdata();

    return 0;
}