#include <stdio.h>
int main(){
    int n, k, i;
    int *p;
    p=&n;
    scanf("%d", p);
    int f=*p+*p-1;
    for (k=1;k<=*p;k++){
        if(k==*p){
            for(i=1;i<=*p;i++){
                printf("*");}}
        if(k!=*p){
            for(i=1;i<=f-*p;i++)
                printf("~");
            for(i=f-*p+1;i<=f;i++)
                printf("*");
        printf("\n");
        --f;
            } 
        }

    }
