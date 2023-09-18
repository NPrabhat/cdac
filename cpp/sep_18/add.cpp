#include<iostream>
using namespace std;

int add(){
    int a=1,b=1;
    return a+b;
}

int add(int a){
    int b=1;
    return a+b;
}

int add(int a,int b){
    return a+b;
}

int main(){
    cout<<add()<<endl;
    cout<<add(4)<<endl;
    cout<<add(4,5);
    return 0;
}