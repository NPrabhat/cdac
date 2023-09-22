/*
1 Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return
type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and
invoke ctotal() to calculate total.
Showdata() Function to display all the data members on the screen.
*/

#include<iostream>
using namespace std;

class Student{
    private:
        int admno;
        char sname[20];
        float eng,math,science,total;
        float ctotal(){
            total = eng+math+science;
            return total;
        }

    public:
        void takeData(){
            cout<<"Enter admno: ";
            cin>>admno;
            cout<<endl<<"Enter student's name: ";
            cin>>sname;
            cout<<endl<<"Enter marks: "<<endl;
            cin>>eng>>math>>science;
        }

        

        void showData(){
            cout<<"The Admission number "<<admno;
            cout<<" "<<sname;
            cout<<endl<<"Marks of English, Math and Science respectively are "<<eng<<" "<<math<<" "<<science<<endl;
            cout<<"The total marks is "<<ctotal();
        }
};

int main(){
    Student s1;
    s1.takeData();
    s1.showData();
    return 0;
}