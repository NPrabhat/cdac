#include<iostream>
using namespace std;

class add {
    int a,b,c,d;
    public:
    add(){
        a=5,b=6;
    }
    void operator ++(){
        a +=2;
        b +=2;
    }

    void operator --(){
        a -=2;
        b-=2;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    add a1;

    ++a1;
    a1.show();
    --a1;
    a1.show();
    return 0;
}