#include<stdio.h>

int main(){
    int arr[5]= {11,62,43,34,25},num,index=-1;
    printf("Enter num: ");
    scanf("%d",&num);
    for (int  i = 0; i < 5; i++)
    {
        if(arr[i]==num){
            index = i;
            break;
        }
    }
    
    if (index>-1){
        printf("%d is in %d position",num, index);
    }
    else
    {
        printf("number not present in array");
    }  
}