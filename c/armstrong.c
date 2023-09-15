#include<stdio.h>

int main(){
    int num=153, temp, sum=0,rem, mul;
    temp = num;

    while(temp!=0){
        rem = temp%10;
        mul = rem*rem*rem;
        sum += mul;
        temp = temp/10;
    }
    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not");
    }
    return 0;
}