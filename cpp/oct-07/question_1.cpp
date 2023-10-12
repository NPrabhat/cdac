#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(){
    ofstream obj;
    obj.open("myFile.txt");
    obj<<"Welcome"<<endl<<"This is prabhat";
    obj<<"This is prabhat"<<endl;

    obj<<"Thank you";
    obj.close();
    cout<<"File is created.";

    return 0;
}