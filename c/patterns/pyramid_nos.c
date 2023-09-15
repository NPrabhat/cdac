#include<stdio.h>

int main(){

    for(int i=0;i<5;i++){
        for(int j=1; j<2*(10-i)-1;j++)
        {
            printf(" ");
        }
        for(int j=1; j< 2*i+2;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}