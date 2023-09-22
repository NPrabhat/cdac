#include<iostream>
using namespace std;

class Employee{
    private:
        int eID;
        double salary, bsalary;
        string eName;

    public:
        void getData(){
            cout<<"Enter ID, Name and Salary: "<<endl;
            cin>>eID;
            cin>>eName;
            cin>>salary;

        }

        void showData(){
            cout<<"ID is "<<eID<<endl;
            cout<<"Name is "<<eName<<endl;
            cout<<"Basic Salary is "<< bsalary<<endl;
        }
        
        void claculateSalary(){
            bsalary = 0.2* salary;
        }
};

int main(){

    Employee e1;
    e1.getData();
    e1.claculateSalary();
    e1.showData();

    return 0; 
}