/*WAP to print the sum of individual five digit numbers*/
#include<stdio.h>

int main(){
    int num=12345,sum=0,temp;

    while(num!=0){
        temp = num%10;
        sum += temp;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
