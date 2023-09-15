#include<stdio.h>

/*WAP to check whether a number is divisible according to the following conditions.
1.no is divisble by 8 & 5.
2.no is divisble by 8.
3.no is divisble by 5.
4.no is divisble neither by 8 nor 5. 
*/

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num%8==0 && num%5==0){
        printf("%d is divisible by 8 and 5",num);
    }
    else if(num%8==0){
        printf("%d is divisible by 8",num);
    }
    else if(num%5==0){
        printf("%d is divisible by 5",num);
    }
    else{
        printf("%d neither divisble by 8 nor by 5",num);
    }
    return 0;

}