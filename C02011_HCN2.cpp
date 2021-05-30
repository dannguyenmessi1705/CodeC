#include <stdio.h>
int main(){
    int a,b,i,j,k;
    scanf("%d%d", &a, &b);
    
    int f=b-1;
    for(i=1;i<=a;i++){
        if(i==1){
            for(j=1;j<=b;j++) printf("%d", j);
            printf("\n");
        }
        if(i!=1 && i<b){
            printf("%d", i);
            for(j=i+1;j<=b;j++) printf("%d", j);
            for(k=b-1;k>=f;k--) printf("%d", k);
            --f;
            printf("\n");
        }
        if(i!=1 && i==b){
            for(j=b;j>=1;j--) printf("%d", j);
            printf("\n");
        }
        if(i!=1 && i>b){
            printf("%d", i);
            for(j=1;j<=b-1;j++) printf("%d", i-j);
            printf("\n");
        }
    }
}