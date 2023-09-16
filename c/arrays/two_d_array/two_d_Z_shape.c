/*
1 2 3
  5  
7 8 9

Z shape

sum
*/

#include<stdio.h>

int main(){
    int a[3][3],i,j,sum=0;
    // printf("%");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("----------Matrix-------------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
            if((i+j==0) || (i+j==4) || (i+j==2) || ((i+j==3) && (j!=2)) || ((i+j==1) && (i!=1)) ){
                sum += a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum is %d",sum);
    return 0;
}