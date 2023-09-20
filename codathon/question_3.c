/*
3. Write a program to Print Prime Numbers between Two numbers.
*/

#include<stdio.h>

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
    int start, ending;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter Ending number: ");
    scanf("%d",&ending);
    for (int i = start; i <= ending ; i++)
    {
        if(isPrime(i)){            
            printf("%d ",i);
        }   
    }    
    return 0;
}