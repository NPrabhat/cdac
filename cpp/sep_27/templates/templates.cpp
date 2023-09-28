#include<iostream>
using namespace std;

template <class S>
S square(S a){
    return a*a;
}

template<class C>
C cube(C a){
    return a*a*a;
}

template<class D, class U>
D area(D a,U b){
    return a*b;
}

int main()
{
    int x=3,y,a=3,b=2,c;
    y=square(x);
    cout<<y<<endl;
    y=cube(x);
    cout<<y<<endl;
    c=area(a,b);
    return 0;
}