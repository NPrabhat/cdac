#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a[n],temp[n],j;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>a[i];
    } 
    
    for(int i=(n-1); i>=0;i--){
        for(j=0; j<n;j++){
            temp[j] = a[i];            
        }
        cout<<temp[j]<<" ";
    }
    return 0;
}