#include <stdio.h>
int main(){
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    int l=b;
    for(i=1;i<=a;i++){
        if(i==1){
            for(j=1;j<=b;j++) printf("%d",j);
            --l;
            printf("\n");
        }
        if(i!=1 && i<b){
            printf("%d",i);
            for(j=i-1;j>=1;j--) printf("%d",j);
            for(j=2;j<=l;j++) printf("%d",j);
            --l;
            printf("\n"); 
        }
        if(i==b){
            for(j=b;j>=1;j--) printf("%d",j);
            ++l;
            printf("\n");
        }
        if(i>b){
            printf("%d",i);
            for(j=i-1;j>=l;j--) printf("%d",j);
            ++l;
            printf("\n");
        }
    }
}