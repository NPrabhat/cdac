/*
6. Write a program to print EVEN numbers from 1 to N using a while loop.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}