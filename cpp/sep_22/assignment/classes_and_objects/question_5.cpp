/*
5 Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies
where N is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to
be paid by the user.
Note : You are also required to give detailed function definitions.
*/

#include<iostream>
using namespace std;

class Book{
    private:
        int book_no, no_of_copies;
        char book_title[20];
        float price, total;
        void total_cost(int n){
            total = n*price;
            cout<<"The total cost is "<<total;
        }
        
    public:
        void input(){
            cout<<"Enter dtails: "<<endl;
            cin>> book_no>> book_title>> price;
        }

        void purchase(){
            cout<<"Enter number of copies: ";
            cin>>no_of_copies;
            total_cost(no_of_copies);

        }
};

int main(){
    Book b1;
    b1.input();
    b1.purchase();
    return 0;
}