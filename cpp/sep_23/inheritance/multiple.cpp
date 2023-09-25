/*

*/

#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        int get(){
            cout<<"Enter A: ";
            cin>>a;
            return a;
        }
};

class B{
    private:
        int b;
    public:
        int getin(){
            cout<<"Enter value of B: ";
            cin>>b;
            return b;
        }
};

class C:public A,public B 
{
    private:
        int c;
    public:
        void add(int a,int b){
            c=a+b;
            cout<<c;
        }

};

int main(){
    C c;
    c.add(c.get(),c.getin());
}