/*
1
10
101
1010
10101
*/

#include<stdio.h>

int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}