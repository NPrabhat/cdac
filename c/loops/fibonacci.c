/*WAP to find the Fibonacci series up to given terms*/

#include<stdio.h>

int main(){
    int start=0,fibo=1,i,num=10,sum=0;
    for(i=0;i<num;i++){
        if(i<=1){
            sum =i;
        }
        else{
            sum = start +fibo;
            start = fibo;
            fibo = sum;
        }
        printf("%d ", sum);
    }

    return 0;
}