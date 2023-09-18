#include<iostream>
using namespace std;

class Student{
    private:
        int prn_no;
        char name[20];
    public:
        void get();
        void put(){
            cout<<prn_no<<" "<<name;
        }
};

void Student::get(){
    cout<<"\nEnter prn and name: ";
            cin>>prn_no>>name;
}


int main(){
    Student s[2];
    for(int i=0;i<2;i++){
        s[i].get();
        s[i].put();
    }

    // Student s, *p, s1;
    // p=&s;
    // p->get();
    // p->put();

    // s1.get();
    // s1.put();
    return 0;    
}