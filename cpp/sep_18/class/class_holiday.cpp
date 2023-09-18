/*Design a class holiday with 2 data members initialized with 0,1 and 2 args using constructor.*/

#include<iostream>
using namespace std;

class Holiday{
    private:
        string date,month, hday;

    public:
        Holiday(){
            cout<<"Enter month:";
            cin>>month;
            cout<<"Enter date: ";
            cin>>date;
            cout<<"Enter holiday name:";
            cin>>hday;
        }

        Holiday(string dat,string holi,string months){
            date = dat;
            hday = holi;
            month = months;
        }

        void show(){
            cout<<"The holiday "<<hday<<" is on "<<date<<month<<"."<<endl;
        }
};

int main(){
    Holiday h1, h2("15","Dusshera","oct");
    h1.show();
    h2.show();
}