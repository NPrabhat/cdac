/*
2.Write a function in C that reverses a given string in-place without using string
function.
*/

#include<iostream>
using namespace std;

void rev(string s)
{   
    for(int i=0; s[i] != '\0'; i++)
    {
        cout<<s[i];
    }
}

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    return 0;
}