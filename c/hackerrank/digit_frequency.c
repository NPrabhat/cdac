#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char num[1000];
    int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
    scanf("%s",num);
    for(int a=0;num[a]!='\0';a++)
    {
        switch (num[a]){
        case '1':
            i++;
            break;
        
        case '2':
            j++;
            break;
            
        case '3':
            k++;
            break;
        
        case '4':
            l++;
            break;
            
        case '5':
            m++;
            break;
        
        case '6':
            n++;
            break;
        
        case '7':
            o++;
            break;
        
        case '8':
            p++;
            break;
        
        case '9':
            q++;
            break;
        
        case '0':
            r++;
            break;
            
        default:
            s++;
            break;
        }
    }   
    printf("%d %d %d %d %d %d %d %d %d %d",r,i,j,k,l,m,n,o,p,q);
    return 0;
}
