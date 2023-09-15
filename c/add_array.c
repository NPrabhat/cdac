#include<stdio.h>

int main(){
    // int arr[2] = {1,2},temp;
    // temp = arr[0] + arr[1];
    // printf("%d",arr[0] + arr[1]);

    int n,arr[n],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <n; i++){
        sum += arr[i];
    }
    printf("%d",sum);

    return 0;

}