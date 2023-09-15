//Write a C program to remove duplicates in a given array?

#include<stdio.h>

int main(){
    int a[6] = {1,2,1,5,8,2};
    int b[6],i,j;

    for(i=0; i<=5;i++){
        for (j = 0; j <= 5; j++)
        {
            if(a[i]== a[j+1]){
                b[i]=a[j];
            }
        }
        printf("%d,",b[i]);
    }

    return 0;
}