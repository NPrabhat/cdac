/*
11.Write a program to Calculate Product of Digits of a Number.
*/

#include<stdio.h>

int main(){
    int num,prod=1,temp=1;
    scanf("%d",&num);
    while(num!=0){
        temp = num%10;
        prod *= temp;
        num = num/10;
    }
    printf("%d",prod);
    return 0;
}