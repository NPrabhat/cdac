/*
5. Write a program to print weekday of given date.
*/

#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);
    switch (num)
    {
        case 1:
            printf("Mon");
            break;
        case 8:
            printf("Mon");
            break;        
        case 15:
            printf("Mon");
            break;
        case 22:
            printf("Mon");
            break;
        case 29:
            printf("Mon");
            break;

        case 2:
            printf("Tues");
            break;
        case 9:
            printf("Tues");
            break;
        case 16:
            printf("Tues");
            break;
        case 23:
            printf("Tues");
            break;
        case 30:
            printf("Tues");
            break;

        case 3:
            printf("Wed");
            break;
        case 10:
            printf("Wed");
            break;
        case 17:
            printf("Wed");
            break;
        case 24:
            printf("Wed");
            break;
        case 31:
            printf("Wed");
            break;

        case 4:
            printf("Thurs");
            break;
        case 11:
            printf("Thurs");
            break;
        case 18:
            printf("Thurs");
            break;
        case 25:
            printf("Thurs");
            break;

        case 5:
            printf("Fri");
            break;
        case 12:
            printf("Fri");
            break;
        case 19:
            printf("Fri");
            break;
        case 26:
            printf("Fri");
            break;

        case 6:
            printf("Sat");
            break;
        case 13:
            printf("Sat");
            break;
        case 20:
            printf("Sat");
            break;
        case 27:
            printf("Sat");
            break;

        case 7:
            printf("Sun");
            break;
        case 14:
            printf("Sun");
            break;
        case 21:
            printf("Sun");
            break;
        case 28:
            printf("Sun");
            break;


    default:
        printf("Invalid date");
        break;
    }
    return 0;
}