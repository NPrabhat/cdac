/*
WAP to swap nos via templates
*/

#include<iostream>
using namespace std;

template<class A>
void swapping(A &a,A &b){
    A temp;
    temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;

}

int main(){
    int a=2,b=3;
    swapping(a,b);
    return 0;
}