#include<iostream>
#include<vector>
using namespace std;

class Decimal{
    int dec;
    public:
        Decimal(){
            // cout<<"Write number: ";
            // cin>>dec;
            dec=23;
        }
        friend void dec_to_bin();
};

// use new
void dec_to_bin(){
    Decimal d1;
    int temp;
    // int arr[];
    while(d1.dec!=0){
        temp = d1.dec%2;
        cout<<temp;
        d1.dec = d1.dec/2;
    }
}


int main(){
    dec_to_bin();
}