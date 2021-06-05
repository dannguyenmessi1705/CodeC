#include <stdio.h>
int main(){
    int a,b,i,j,k,h;
    scanf("%d", &a);
    k=63+a;
    h=k+a-1;
    for(i=1;i<=a;i++){
        for(j=k;j<=h;j++){
            printf("%c", j);
        }
        printf("\n");
        k--;
        h-=2;
    }
}