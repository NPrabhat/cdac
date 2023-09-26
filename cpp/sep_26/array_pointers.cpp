#include<iostream>
using namespace std;

int main(){
    int arr[5],i,*p;
    p=arr;
    for (i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<5;i++){
        cout<<"\n "<<*p;
        p++;
    }
}