#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a[n],temp;
    cin>>n;
    
    //scan
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //print
    for(int i=n-1;i>=0;i--){
          temp = a[i];
          cout<<temp<<" ";
    }
    return 0;
}
