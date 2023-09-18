#include<iostream>
using namespace std;

class Student{
    // private:
        int roll_no, contact;
        string name;
        string address;
        
    public:
        Student()
        {   
            cin>>roll_no>>name>>;
        }
        void show(){
            cout<<roll_no<<endl<<name;
        }
};

int main(){
    Student s1;
    s1.show();
}

