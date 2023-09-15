//A number is entered through the keyboard.the number may contain 1,2,3,4 or 5 digits.Write a program to find a 
//number of digits in the number.

#include<stdio.h>

int main(){
    int num,count=0;
    printf("Enter number: ");
    scanf("%d",&num);

    while(num!=0){
        num = num/10;
        count++;
    }
    printf("%d",count);
    return 0;
}