#include<stdio.h>

//Calculate the Factorial of a Number

int main(){
    int num1, fact=1;
    printf("Enter number: ");
    scanf("%d",&num1);
    for(int i=1; i<=num1; i++){
        fact = fact*i;
    }
    printf("The factorial is %d",fact);
}