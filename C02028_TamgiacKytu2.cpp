#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d", &a);
    int k=63+2*a;
    int h=65;
    for(i=1;i<=a;i++){
        for(j=h;j<=k;j+=2){
            printf("%c", j);
        }
        h+=2;
        printf("\n");
    }
}