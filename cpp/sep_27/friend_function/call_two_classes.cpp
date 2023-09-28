#include<iostream>
using namespace std;

class Sample{
    int a;
    public:
        Sample(){
            a=10;
        }
        friend void add();
};

class Demo{
    int b;
    public:
        Demo(){
            b=20;
        }
        friend void add();
};

void add(){
    int c;
    Sample s;
    Demo d;
    c= s.a;
    cout<<c;
}

int main(){
    add();
    return 0;
}