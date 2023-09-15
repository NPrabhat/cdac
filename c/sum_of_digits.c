#include<stdio.h>
int main(){
    // int number, sum=0, temp;
    // printf("Enter any number: ");
    // scanf("%d",&number);
    // while (number!=0){
    //     temp = number%10;
    //     sum = sum + temp;
    //     number = number/10;        
    // }
    // printf("The sum of digits is %d",sum);

    int per;
    printf("Enter percentage: ");
    scanf("%d",&per);
    if(per>=80)
    {
        printf("A+");
    }
    else if (per>=65 && per<=80)
    {
        printf("A");
    }
    else if(per>=50 && per<=65){
        printf("B");
    }
    else if(per>=42 && per<=50){
        printf("C");
    }
    else{
        printf("FAIL");
    }
    return 0;
}