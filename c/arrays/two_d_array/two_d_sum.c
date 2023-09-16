#include<stdio.h>
//for position (0,1),(1,0),(1,2),(2,1)
/*
    2
4       6
    8
sum
*/

int main(){
    int a[3][3],i,j,sum=0;
    printf("Enter elements in matrix");
    for(i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("--------------Matrix-------------\n");
        for(i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
            // if(((i==0|| i==2) && j==1) || (i==1 && (j==0 || j==2))){
            //     sum += a[i][j];
            // }
            if((i+j==1)||(i+j==3)){
                sum += a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum is: %d",sum);
    return 0;
}