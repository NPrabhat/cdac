#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        char name[20];
    
    public:
        void get(){
            cin>>id>>name;
        }
        void put(){
            cout<<id<<" "<<name;
        }
};

class Science:public Student{
    char s1[20], s2[20],s3[20];
    public:
        void getin(){
            cin>>s1>>s2>>s3;
        }
        void putin(){
            cout<<s1<<s2<<s3<<endl;
        }
};

class Commerce:public Student{
    char c1[20],c2[20],c3[20];
    public:
    void inputin(){
        cin>>c1>>c2>>c3;
    }
    void output(){
        cout<<c1<<c2<<c3;
    }
};

int main(){
    Science s;
    Commerce c;

    s.get();
    s.getin();
    s.put();
    s.putin();

    c.get();
    c.inputin();
    c.put();
    c.output();

    return 0;

}