#include<stdio.h>

void pattern1(){
    int n=5,row,col;
    for (row = 1; row <= n ; row++)
    {
        for(col=1; col<= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern2(){
    int n=5,row,col;
    for (row = 1; row <= n ; row++)
    {
        for(col=1; col<= n-row+1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(){
    int n=5,row,col;
    for (row = 1; row <= n ; row++)
    {
        for(col=1; col<= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}


void pattern4(){
    int n=5,row,col;
    for (row = 1; row <= n ; row++)
    {
        for(col=1; col<= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}

void pattern5(){
    int n=5,row,col;
    for(row = 1; row <= n ; row++){
        
    }
}

int main(){

    pattern3();
    return 0;    
    
}