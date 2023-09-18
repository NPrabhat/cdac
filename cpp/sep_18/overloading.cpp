#include<iostream>

using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}

int add(int a,int b, int c){
    int d=a+b+c;
    return d;
}

float add(int a, float b){
    float c= a+b;
    return c;
}

int main(){
    cout<<add(1,2);
    cout<<endl<<add(1,2,3);
    cout<<endl<<add(2,2.5f);
}