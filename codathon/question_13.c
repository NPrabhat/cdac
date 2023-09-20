/*
13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.
*/

#include<stdio.h>

int main(){
    int num,area;
    float area_1;
    scanf("%d",&num);
    switch (num)
    {
    case 11:
        area_1 = 3.014*num;
        printf("Area of cirle is %f",area_1);
        break;

    case 22:
        area = num*num;
        printf("Area of rectangle is %d",area);
        break;

    case 33:
        area = num*num;
        printf("Area of square is %d",area);
        break;

    case 44:
        area = num;
        printf("Area of tirangle is %d",area);
        break;

    
    default:
        printf("Invalid number");
        break;
    }
}