/*
WAP to print area of rect and circle.
*/

#include<iostream>

using namespace std;

float area(float r){
    float pi = 3.14;
    return pi*r*r;
}

int area(int a, int b){
    int c= a*b;
    return c;
}

int main(){
    cout<<area(5)<<endl;
    cout<<area(2,5);
    return 0;
}