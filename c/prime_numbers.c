#include<stdio.h>

//Find the Prime Numbers in a Range

int isPrime(int i){
    for (int j = 2; j*j<=i; j++)
    {
        if(i%j == 0){
            return 0;
        }
    }
    return 1;
    
}

int main(){
    int prime;
    printf("Enter number: ");
    scanf("%d",&prime);
    for (int i = 2; i <= prime ; i++)
    {
        if(isPrime(i)){            
            printf("%d ",i);
        }   
    }    
    return 0;
}