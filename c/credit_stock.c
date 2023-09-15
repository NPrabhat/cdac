#include<stdio.h>

int main(){
    int CO, stock;
    char credit;

    printf("Enter Customer Order, Stocks and credit(only in y or n) :\n");
    scanf("%d%d %c\n",&CO,&stock,&credit);

    if(CO<=stock && credit =='y')
    {
        printf("Supply has requirements");
    }
    else if (CO>stock && credit =='y')
    {
        printf("The balance  %d will be shipped", CO-stock);
    }
    else{
        printf("Do not supply");
    }
    

}