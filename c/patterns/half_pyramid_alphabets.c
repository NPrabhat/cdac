/*
A
AB
ABC
ABCD
ABCDE
*/

#include<stdio.h>

int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=65;j<=i+65;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}