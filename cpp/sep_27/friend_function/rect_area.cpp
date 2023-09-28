#include<iostream>
using namespace std;

class Rectangle{
    int l,b;
    public:
        Rectangle(){
            cout<<"Enter length and breadth: "<<endl;
            // l=10;
            // b=20;
            cin>>l>>b;
        }
        friend int area();
};

int area(){
    Rectangle r1;
    int ar;
    ar = r1.l * r1.b;
    return ar;
}

int main(){
    cout<<area();
}