#include<stdio.h>

int add(int a,int b){
    for(int i=0; i<b;i++){
        a++;
    }
    return a;
}

int main(){
    int num1,num2;
    printf("Enter two nos: ");
    scanf("%d %d",&num1,&num2);
    printf("%d",add(num1,num2));
    return 0;
}