#include <stdio.h>
int main(){
    int n, dem=1;
    scanf("%d", &n);
    while(dem<=n){
        for(int i=0;i<dem;i++)
            printf("%d", 1+2*i);
        for(int i=dem-1;i>0;i--)
            printf("%d", 2*i-1);
        printf("\n");
        dem++;
    }
}