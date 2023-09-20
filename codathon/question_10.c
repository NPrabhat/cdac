/*
10.Write a program to read an integer and print its multiplication table.
*/

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d",n,i,i*n);
        printf("\n");
    }
    return 0;
}