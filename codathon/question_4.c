/*
4. Write a program to compare two no by using the ternary operator in c.
*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter two nos: ");
    scanf("%d%d",&a,&b);
    c = (a>b)?printf("%d is greater",a):printf("%d is greater",b);
    return 0;
}