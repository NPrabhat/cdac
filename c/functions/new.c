#include<stdio.h>
#include<stdlib.h>
// void menu(){
//     int operator=0;
    
//     do
//     {
//         printf("===================Calculator=====================");
//         printf("\n Welcome     ");
//         printf("\nEnter Operation");
//         printf("\n1.Addition 2.Subtraction\n3.Multiplication 4.Division\n");
//         printf("Enter Here:");
//         scanf("%c",&operator);
//         switch (operator)
//         {
//         case 1:
//             addition();
//             break;
        
//         case 2:
//             subtract();
//             break;

//         case 3:
//             multiply();
//             break;

//         case 4:
//             division();
//             break;
        
//         default:
//             exit(0);
//             break;
//         }
//     } while (operator!=5);
    
// }

void addition(int a,int b){
    int c;
    c=a+b;
    // int a,b;
    // printf("Enter two numbers:");
    // scanf("%d%d",&a,&b);
    printf("\nThe addition is %d",c);
}

void subtract(int a,int b){
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d%d",&a,&b);
    printf("\nThe subtraction is %d", a-b);
}

void multiply(int a,int b){
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d%d",&a,&b);
    printf("\nThe multiplication is %d", a*b);
}

void division(int a,int b){
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d%d",&a,&b);
    printf("\nThe subtraction is %d", a/b);
}

int main(){
        int operator=0;  
        int a,b;  
    do
    {
        printf("\n===================Calculator=====================");
        printf("\n Welcome     ");
        printf("\nEnter Operation");
        printf("\n1.Addition 2.Subtraction\n3.Multiplication 4.Division\n");
        printf("Enter Here:");
        scanf("%d",&operator);
        // printf("Enter two numbers: ");
        // scanf("%d%d",&a,&b);
        switch (operator)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            addition(a,b);
            break;
        
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            subtract(a,b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            multiply(a,b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            division(a,b);
            break;
        
        default:
            break;
        }
    } while (operator!=5);
    return 0;
}