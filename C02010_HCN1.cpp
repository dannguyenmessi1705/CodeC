#include <stdio.h>
int main(){
    int a,b,i,j,k;
    scanf("%d%d", &a, &b);
    for(i=1;i<=a;i++){
        if(i==1){
            for(j=1;j<=b;j++) printf("%d", j);
            printf("\n");
        }
        if(i!=1 && i<b){
            printf("%d", i);
            for(j=i+1;j<=b;j++) printf("%d", j);
            for(k=i-1;k>=1;k--) printf("%d", k);
            printf("\n");
        }
        if(i!=1 && i==b){
            for(j=b;j>=1;j--) printf("%d", j);
            printf("\n");
        }
        if(i!=1 && i>b){
            printf("%d", i);
            for(j=b-1;j>=1;j--) printf("%d", j);
            printf("\n");
        }
    }
}