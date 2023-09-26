#include<iostream>
using namespace std;

void multi(int *n1 ,int *n2){
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}

int main(){
    int x=10,y=20, *p, *q;
    p=&x;
    q=&y;
    multi(p,q);
    cout<<"x="<<x<<" y="<<y;
    return 0;
}