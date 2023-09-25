#include<iostream>
using namespace std;

class Base{
    private:
        int a,b;
        void add(){
            int c = a+b;
        }

    public:
        void get(){
            cout<<"\nEnter 2 nos:";
            cin>>a>>b;
        }
        void show(){
            cout<<"A "<<a<<endl;
            cout<<"B "<<b<<endl;
        }
};

class Derive : protected Base
{
    private:
        int c,d;
    public:
        void display(){
                get();
                show();
                cout<<"Call of base class";
        }
};

int main(){
    Derive d;
    Base b;
    // d.display();
    b.get();
    b.show();
    return 0;
}