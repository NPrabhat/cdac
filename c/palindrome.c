#include<stdio.h>

//Write a C program to check if it is a palindrome number or not using a recursive method

int main(){
    int palin,temp1, temp2, sum=0;
    printf("Enter number; ");
    scanf("%d",&palin);
    temp1 = palin;

    while(temp1!=0){
        temp2 = temp1%10;
        sum = sum*10 + temp2; 
        temp1 = temp1/10;
    }

    if(palin == sum)
    {
        printf("Palindrome");
    }
    else{
        printf("Not");
    }
}