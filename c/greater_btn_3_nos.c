#include<stdio.h>
//greater betn 3 nos
int main(){
    int a,b,c;
    printf("Enter 3 nos: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is grater than %d and %d",a,b,c);
    }
    else if(b>a && b>c)
    {
        printf("%d is grater than %d and %d",b,a,c);
    }
    else if(c>a && c>b)
    {
        printf("%d is grater than %d and %d",c,b,a);
    }

    return 0;
}