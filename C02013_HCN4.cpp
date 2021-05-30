#include <stdio.h>
int main(){
    int a, b, i, j, max;
    scanf("%d%d", &a, &b);
    a >= b ? max=a : max=b;
    int l=max-b+1;
    int l1=max-b+1;
    for(i=max;i>=max-a+1;i--){
        if(i==max){
            for(j=i;j>=l;j--) printf("%d",j);
            printf("\n");
        }
        if(i!=max && i>b){
            --l;
            for(j=i;j>=l;j--) printf("%d",j);
            printf("\n"); 
        }
        if(i!=max && i<b){
            ++l1;
            for(j=i;j>=1;j--) printf("%d",j);
            if(a<=b)
            for(j=2;j<=l1;j++) printf("%d", j);
            else{
            ++l;
            for(j=2;j<=l;j++) printf("%d", j);
            }
            printf("\n");
        }
        if(i==b && i!=max){
            --l;
            for(j=i;j>=l;j--) printf("%d", j);
            printf("\n");
        }
    }
}