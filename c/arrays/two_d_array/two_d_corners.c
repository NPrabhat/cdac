/*
1   3

7   9
sum
*/

#include<stdio.h>

int main(){
    int a[3][3],i,j,sum=0;
    printf("Enter elements: ");
    for(i=0; i<3;i++){
        for ( j = 0; j <3; j++)
        {   
            scanf("%d",&a[i][j]);
        }        
    }
    printf("--------------------Matrix-----------------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
            if((i+j==0) || (i+j==4) || ((i+j==2) && j!=1)){
                sum += a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum is %d",sum);

}