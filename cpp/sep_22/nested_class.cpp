#include<iostream>
using namespace std;

class Student{
    private:
        char name[20];
        int id;
    
    public:
        void get();
        void put();
    
    class Address{
        private:
            char city[20],state[20];
        public:
            void in();
            void out();
    };
};

void Student::get(){
    cout<<"Enter details: ";
    cin>>name>>id;
}

void Student::put(){
    cout<<name;
    cout<<id;
}

void Student::Address::in(){
    cout<<"Enter city";
    cin>>city;
}

void Student::Address::out(){
    cout<<
}

int main(){
    Student s;
    Student::Address a;
    s.get();
    s.put();
    a.in();
    a.out();
    return 0;
}

