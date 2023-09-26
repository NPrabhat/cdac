#include<iostream>
using namespace std;

int main(){
    // int x=10;
    // int *p=&x;
    // cout<<"\nAddress of x:"<<&x<<" "<<p;
    // cout<<"\nValue of x:"<<x<<" "<<*p;
    int x=10,*p,**s;
    p=&x;
    s=&p;

    cout<<"\nAddress of x:"<<&x<<" "<<p<<" "<<*s;
    cout<<"\nValue of x:"<<x<<*p<<**s;
    return 0;
}