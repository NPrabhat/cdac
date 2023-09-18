/*
WAP to find factorial of a number.
NOTE: With Return With Arguments.
*/

#include<iostream>
using namespace std;

int fact(int n){
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;    
}

int main(){
    int a;
    cin>>a;
    cout<<fact(a);
    return 0;
}