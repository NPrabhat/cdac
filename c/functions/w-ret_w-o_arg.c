#include<stdio.h>

int add();

int main(){
    int ans;
    ans=add();
    printf("%d",ans);
}

int add()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}