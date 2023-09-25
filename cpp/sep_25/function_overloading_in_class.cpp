#include<iostream>
using namespace std;

class Addition{
    private:
        int a,b,c;
        float d;

    public:
        void add(){
            int a=5,b=10;
            c=a+b;
            cout<<c<<endl;
        }
        void add(int a,int b){
            c= a+b;
            cout<<c<<endl;
        }
        void add(float q, float r){            
            d=q+r;
            cout<<d;
        }
};

int main(){
    Addition a1;
    a1.add();
    a1.add(1,2);
    a1.add(2.3f,3.2f);

    return 0;
}