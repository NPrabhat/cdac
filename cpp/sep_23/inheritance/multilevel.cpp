/*
first class num --- n --- i/p
2nd class square -- n^2
3rd class cube --- n^3
*/

#include<iostream>
#include<math.h>
using namespace std;

class Num{
    private:
        int n;

    public:
        int operation(){
            cout<<"Enter number: ";
            cin>>n;
            cout<<endl;
        }
};

class Square:public Num
{
    protected:
        int sq;
    
    public:
        int square(int n){
            sq = n*n;
            return sq;
        }
};

class Cube: public Square
{
    private:
        int cub;
        int num;

    public:
        int cube(int sq){
            num = sqrt(sq);
            cub = num*sq;
            return cub;
        }
};

int main(){
    
}