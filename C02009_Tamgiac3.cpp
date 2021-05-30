#include <stdio.h>
int main(){
    int a, i, k;
    int j=1;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(i==a){
            for(k=1;k<=a;k++) printf("*");
        }
        if(i!=a){
            for(k=0;k<a-j;k++) printf("~");
            for(k=a-j;k<a;k++) printf("*");
        }
        ++j;
        printf("\n");
    }
}