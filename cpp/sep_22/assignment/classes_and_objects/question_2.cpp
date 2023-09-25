/*
2 Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
 batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
readdata() Function to accept value from bcode, name, innings, notout
and invoke the function calcavg()
displaydata() Function to display the data members on the screen.
*/

#include<iostream>
using namespace std;

class Batsman{
    private:
        int bcode;
        char bname[20];
        int innings, notout, runs;
        int batavg;
        int calavg(){
            batavg = runs/(innings-notout);
            return batavg;
        }

    public:
        void readData(){
            while(true)        
            {
                cout<<"Enter Code: "<<endl;
                cin>>bcode;
                if(bcode>999 && bcode <10000){
                    break;
                }
                else{
                    cout<<"Invalid CODE"<<endl;
                }
            }
            
            cout<<"Enter batsman name: "<<endl;
            cin>>bname;
            cout<<"Enter innings, notout,runs:"<<endl;
            cin>>innings>>notout>>runs;
            calavg();
        }

        void displayData(){
            cout<<"Displaying data"<<endl;
            cout<<bcode<<"\n"<<bname<<"\n"<<innings<<"\n"<<notout<<"\n"<<runs<<"\n"<<batavg<<endl; 
        }
};

int main(){
    Batsman b1;
    b1.readData();
    b1.displayData();
    return 0;
}