/*
16.Explain how the nested loops in the program work together to print a pyramid
of asterisks based on the user input n. Also, provide an example of the output
when n is set to 5. write code for it.
*/

#include<stdio.h>

int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-i)-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
}