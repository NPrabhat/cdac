#include<stdio.h>

// Implement a Simple Calculator

int main(){
    int num1, num2,c;
    char operator;
    
    printf("Select operator");
    scanf("%c",&operator);
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    
    switch(operator)
    {
        case '+':
            printf("Addition is %d", num1+num2);
            break;
        
        case '-':
            c = num1 -num2;
            if(c<0){
                c = -c;
            }
            printf("The difference is %d",c);
            break;
        
        case '*':
            printf("Product is %d", num1*num2);
            break;
        
        case '/':
            printf("Division is %d",num1/num2);
            break;
        
        
        default:
            printf("Invalid Operator");
            break;
    }
}