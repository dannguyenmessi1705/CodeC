#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d%d", &a, &b);
    int max;
    if(a>b) max=a;
    else max=b;
    int k=96+max;
    for(i=1;i<=a;i++){
        if(i==1){
            for(j=1;j<=b;j++) printf("%c", k); 
            k--;
            printf("\n");
}
        if(i>=b){
            for(j=96+a;j>96+a-b;j--) printf("%c", j);
            printf("\n");
        }
        if(i!=1 && i<b){
            for(j=96+max;j>96+max-i;j--) printf("%c", j);
            for(j=i;j<b;j++) printf("%c", k);
            k--;
            printf("\n");
        }
    }
}