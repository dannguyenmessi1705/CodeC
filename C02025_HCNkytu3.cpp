#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d%d", &a, &b);
    int k=0;
    for(i=1;i<=a;i++){
        if(i<b){
            for(j=64+k;j<64+b;j++) printf("%c", j);
            for(j=1;j<i;j++) printf("%c", 63+b);
            printf("\n");
            k++;
        }
        if(i>=b){
            for(j=1;j<=b;j++) printf("%c", 63+b);
            printf("\n");
        }

    }
}