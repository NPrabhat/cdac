/*
17.Write a program to find the sum of two matrices of order 2*2 using
multidimensional arrays
*/

#include<stdio.h>

int main(){
    int a[2][2]={{1,2},{1,2}},b[2][2]={{1,2},{1,2}},c[2][2];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i==0 && j==0){
                c[i][j] = a[i][j]+b[i][j];
            }
            else if (i==0 && j==1)
            {
                c[i][j] = a[i][j]+b[i][j];
            }
            else if (i==1 && j==0)
            {
                 c[i][j] = a[i][j]+b[i][j]; 
            }
            else if (i==1 && j==1)  
            {
                 c[i][j] = a[i][j]+b[i][j];
            }                  
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}