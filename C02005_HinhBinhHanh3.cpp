#include <stdio.h>
int main(){
    int a, b, k, i;
    scanf("%d%d", &a, &b);
    int f=b+1;
    int j=f;
    for (k=1;k<=a;k++){
        if(k==1){
            for(i=1;i<=b;i++){
                printf("*");}
                printf("\n");
                }
        if(k!=1){
            for(i=1;i<=f-b;i++)
                printf("~");
            for(i=f-b;i<f;i++)
                printf("*");
        printf("\n");
        ++f;
            } 
        }

    }
