#include<iostream>
using namespace std;

int main(){
    int engg_percent, rank;
    cin>>engg_percent;
    try{
        if(engg_percent >=50){
            cout<<"Eligible for DAC course"<<endl;
            cout<<"Enter rank: ";
            cin>>rank;
            try
            {
                if(rank<=2000){
                    cout<<"Pune"<<endl;
                }
                else if (rank>=2000 && rank<=4000)
                {
                    cout<<"Nagpur"<<endl;
                }
                else if (rank>=4000 && rank<=6000)
                {
                    cout<<"Mumbai"<<endl;
                }
                else{
                    throw "Not eligible\n";
                }
            }
            catch(const char *m)
            {
                cerr <<m << '\n';
            }
            
            
        }
        else{
            throw "You are not eligible.";
        }
    }
    catch(const char *m){
        cerr<<m;
    }
}