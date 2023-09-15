//WAP to calculate commission if sale is greater than 1000 then commission = 15%.

// if amt>1000 then comm = amt*0.15

#include<stdio.h>

int main(){

    float amt,comm;
    printf("Enter amount: ");
    scanf("%f",&amt);

    if(amt>1000)
    {
        comm = amt*0.15;
        printf("The commission is %.2f", comm);
    }  
    return 0;
}