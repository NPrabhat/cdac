#include<iostream>
using namespace std;

class CashRegister{
    private:
        int cashOnHand ;
    
    public:
        CashRegister(){
            cashOnHand = 500;
        }

        CashRegister(int cash){
            cashOnHand = cash;
        }

        int getCurrentBalance(){
            return cashOnHand;
        }

        void acceptAmount(int cash){

        }
};

class DispenserType{
    private:
        int numberOfItems, cost;

    public:
        DispenserType(){
            numberOfItems = 50;
            cost = 50;
        }

        DispenserType(int items,int cst){
            numberOfItems = items;
            cost = cst;
        }
        
        int getNoOfItems(){
            return numberOfItems;
        }

        int getCost(){
            return cost;
        }

        void makeSale(){
            numberOfItems--;
        }
};

int main(){
    
}