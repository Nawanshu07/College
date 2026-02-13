#include <iostream>
using namespace std;

class set{
    public:
        int x , y;
        set(int x = 0 , int y = 0){
            this -> x = x;
            this -> y = y;
        }

        set& setx(int a){
            x = a;
            return *this;
        }

        set& sety(int b){
            y = b;
            return *this;
        }

         void display(){
            cout<<"x = "<<x<<"y = "<<y;
        }
};

int main() {
    set o1;
    o1.setx(3).sety(4).display();
    
    return 0;
}