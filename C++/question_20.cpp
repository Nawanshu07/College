#include <iostream>
using namespace std;
int per(float a ,float b, float c, float d, float e ){
    float per;
    per = (a+b+c+d+e) * 100 /500;
    return per;
}

void grade(float p, char &g){
    if (p > 70)
    {
        g = 'A';
    }
    else if (p > 60)
    {
        g = 'B';
    }
    else if (p > 50)
    {
        g = 'C';
    }
    else
        g = 'D';
    
}
int main() {
    char g;
    float a ,b, c, d, e;

    cout<<"Enter marks of 5 subjects:";
    cin >>a >>b>>c>>d>>e;
    int p = per(a,b,c,d,e);

    grade(p , g);
    cout<<"Grade is "<<g;

    return 0;
}