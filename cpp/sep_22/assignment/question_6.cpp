/*
6 Define a class REPORT with the following specification:
Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject
Public members:
READINFO() function to accept values for adno, name, marks. Invoke the
function GETAVG()
DISPLAYINFO() function to display all data members of report on the screen.
You should give function definitions.*/

#include<iostream>
using namespace std;

class Report{
    private:
        int adno;
        char name[20];
        float marks[5],average,sum=0;
        void GETAVG(){
            for(int i=0;i<5;i++){
                sum+= marks[i];
            }
            average = sum/5;
        }

    public:
        void read_info(){
            cout<<"Enter details: ";
            cin>>adno>>name;
            cout<<endl<<"Enter marks:";
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
            GETAVG();
        }

        void display_info(){
            cout<<"*************************"<<endl;
            cout<<"The output is:"<<endl;
            cout<<adno<<endl;
            cout<<name<<endl;
            cout<<"The marks are: ";
            for(int i=0;i<5;i++){
                cout<<marks[i]<<endl;
            }
            cout<<"The average is "<<average;
        }
};

int main(){
    Report r1;
    r1.read_info();
    r1.display_info();
}