#include<iostream>
using namespace std;

/*
There are 4 types of constructor 
- Default constructor
- Parameterized constructor
- Copy constructor
- constructor overloading
*/

class Demo
{
    private:
    int a,b;
    public:
    Demo() //default constructor
    {
        a=10;
        b=20;
    }
    Demo(int x, int y) //Parameterized constructor
    {
        a=x;
        b=y;
    }
    Demo(Demo &obj) //copy constructor
    {
        a=obj.a;
        b=obj.b;
    }
    void show()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor"<<endl;
    }
};

// void Demo()::Demo(){
//     a=30;
//     b=40;

// }

int main(){
    Demo d,d1(2,3),d2(d);
    d.show();
    d1.show();
    d2.show();
    return 0;
}

