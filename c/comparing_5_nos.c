#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("enter:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("A is greater");
                }
            }
        }
    }
    if(b>a){
            if(b>c){
                if(b>d){
                    if(b>e){
                        printf("B is greater");
                    }
                }
            }
    }
    if(c>a){
        if(c>b){
            if(c>d){
                if(c>e){
                    printf("C is greater");
                }
            }
        }
    }
    if(d>a){
        if(d>b){
            if(d>c){
                if(d>e){
                    printf("D is greater");
                }
            }
        }
    }
    if(e>a){
        if(e>b){
            if(e>c){
                if(e>d){
                    printf("E is greater");
                }
            }
        }
    }
    return 0;
}