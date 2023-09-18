/*
WAP to print diff data types by using function named print.
*/

#include<iostream>
using namespace std;

int print(int a){
    //cout<<"Datatype is int: "<<a;
    return a;
}

char print(char b){
    cout<<"Datatype is char: "<<b;
    return 0;
}

float print(float c){
    cout<<"Datatype is float: "<<c;
    return 0;
}

double print(double d){
    cout<<"Datatype is double: "<<d;
    return 0;
}

int main(){
    int a= 5;
    char b= 'b';
    float c = 3.423f;
    double d = 123.123244f;

    cout<<print(a)<<endl;
    cout<<print(b)<<endl;
    cout<<print(c)<<endl;
    cout<<print(d)<<endl;
    // return 0;
}