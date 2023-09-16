/*.WAP to reverse the integer number*/

#include<stdio.h>

int main(){
    int i,num,temp,rev=0;
    scanf("%d",&num);
    
    while(num!=0){
        temp = num%10;
        rev = rev*10 + temp;
        num=num/10;
    }
    printf("%d", rev);
    return 0;
    
}