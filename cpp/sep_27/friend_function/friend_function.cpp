#include<iostream>
using namespace std;

class demo{
    friend void msg();
};

void msg(){
    cout<<"\nI'm a friend function.";
}

int main(){
    msg();
}