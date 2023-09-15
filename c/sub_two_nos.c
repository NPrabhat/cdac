#include<stdio.h>

//Write a C program to Subtract Two Numbers Without Using the Subtraction Operator

int sub(int a, int b){
    for(int i=0; i<a;i++){
        b--;
    }
    if(b<0){
        b = -b;
        return b;
    }
    return b;
}

int main(){
    int num1, num2;
    printf("Enter nos: ");
    scanf("%d%d",&num1,&num2);
    printf("%d",sub(num1,num2));
}