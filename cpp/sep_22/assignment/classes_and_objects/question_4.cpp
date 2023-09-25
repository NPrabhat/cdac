/*
4 Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following
criteria
 Distance                   Fuel
 <=1000                     500
 more than 1000 and <=2000  1100
 more than 2000             2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members
*/

#include<iostream>
using namespace std;

class Qatar{
    private:
        int flight_no;
        string destination;
        float distance, fuel;

        void cal_fuel(){
            if(distance<=1000){
                fuel = 500;
            }
            else if (distance>1000 && distance<=2000){
                fuel = 1100;
            }
            else{
                fuel = 2200;
            }
        }

    public:
        void feed_info(){
            cout<<"Enter details: "<<endl;
            cin>>flight_no>>destination>>distance;
            cal_fuel();
        }
        void show_info(){
            cout<<"****************************************"<<endl;
            cout<<"The Details are "<<endl;
            cout<<"Flight number: "<<flight_no<<endl;
            cout<<"Destination: "<<destination<<endl;
            cout<<"Distance: "<<distance<<endl;
            cout<<"Fuel: "<<fuel;
        }
};

int main(){
    Qatar q1;
    q1.feed_info();
    q1.show_info();
}