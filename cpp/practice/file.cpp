#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ifstream inFile;
    // ofstream onFile;
    // char str;
    // inFile.open("D:\\cdac\\cpp\\practice\\file.txt");
    // onFile.open("D:\\cdac\\cpp\\practice\\file2.txt");
    // while (inFile.get(str))
    // {
    //     onFile.put(str);
    // }
    // inFile.close();
    // onFile.close();

    int value = remove("D:\\cdac\\cpp\\practice\\file2.txt");
    if(value==0){
            cout<<"File deleted";
    }
    else{
        cout<<"File not deleted";
    }
}
