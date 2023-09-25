#include<iostream>
using namespace std;

class Student{
    protected:
        int id;
        string name;

    public:
        void get(){
            cin>>id>>name;
        }
        void put(){
            cout<<id<<endl<<name<<endl;
        }
};

class Test:public Student{
    private:
        int s1,s2,s3;
    public:
        void getTest(){
            get();
            cin>>s1>>s2>>s3;
        }

        void putTest(){
            put();
            cout<<s1<<" "<<s2<<" "<<s3<<endl;
        }
};

class Sports{
    private:
        char sports_name[20];
    public:
        void getSports(){
            cout<<endl<<"Enter sports name: ";
            cin>>sports_name;
        }
        void putSports(){
            cout<<sports_name;
        }
};

class Result:public Test, public Sports{
    public:
        void getResult(){
            
            getTest();
            getSports();
        }

        void putResult(){
            putTest();
            putSports();
        }
};

int main(){

    Result r;
    r.getResult();
    r.putResult();

    return 0;
}