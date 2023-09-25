#include<iostream>
using namespace std;


class Cons{
    int a,b;
    public:
    Cons(){
        a=5;
        b=6;
        cout<<a<<" "<<b;
        cout<<"Default Cons"<<endl;
    }
    Cons(int a,int b){
        a=10,b=20;
        cout<<a<<" "<<b;
        cout<<"Parameterized Cons"<<endl;
    }
    Cons(Cons &obj){
        a = 500;
        b=1000;
        cout<<a<<" "<<b;
        cout<<"Copy"<<endl;
    }
    void show(){
        cout<<a<<endl<<b;
    }
};

int main(){
    Cons c1,c2(1,2),c3(c1);
    return 0;
}