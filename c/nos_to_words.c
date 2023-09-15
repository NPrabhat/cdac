/*.if a number 972 is entered through the keyboard your 
program should print “Nine Seventy Two”.Write the 
program such that it does this for any positive Integer.
*/
#include<stdio.h>

int main(){
    int num,temp1,temp2,temp3;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num/100!=0){
        temp1 = num/100;
        switch (temp1)
        {
        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;

        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;
    
        default:
            break;
        }
    }

    if(num/10!=0){
        temp2 = num/10;
        temp2 = temp2%10;
        switch (temp2)
        {
        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Twenty ");
            break;

        case 3:
            printf("Thirty ");
            break;

        case 4:
            printf("Forty ");
            break;

        case 5:
            printf("Fifty ");
            break;

        case 6:
            printf("Sixty ");
            break;

        case 7:
            printf("Seventy ");
            break;  

        case 8:
            printf("Eighty ");
            break;

        case 9:
            printf("Ninety ");
            break;
    
        default:
            break;
        }
    }

    if(num%10!=0){
        temp3 = num%10;
        switch (temp3)
        {
        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;

        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;
    
        default:
            break;
        }
    }
}