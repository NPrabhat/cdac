/*
3 Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members
*/

#include<iostream>
using namespace std;

class Test{
    private:
        int test_code;
        string description;
        int Nocandidate, centerReqd, no_of_center;
        int calcnctr()
        {
            no_of_center = (Nocandidate/100) + 1;    
            return no_of_center;    
        }

    public:
        void schedule(){
            cout<<"Enter details: "<<endl;
            cin>>test_code>>description>>centerReqd>>Nocandidate;
            calcnctr();
        }
        void disptest(){
            cout<<"***************************The details are **********************************"<<endl;
            cout<<test_code<<endl;
            cout<<description<<endl;
            cout<<Nocandidate<<endl;
            cout<<centerReqd<<endl;
            cout<<no_of_center<<endl;            
        }
};

int main(){
    Test t1;
    t1.schedule();
    t1.disptest();
}