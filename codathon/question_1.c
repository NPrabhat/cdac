/*1. Write a program to find the cube of a number use loop.*/

#include<stdio.h>

int main(){
    int i=1,cube=1,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            cube = n*n*n;
    }
    printf("The cube is %d.",cube);
    return 0;
}