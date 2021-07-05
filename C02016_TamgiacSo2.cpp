#include <stdio.h>
int main(){
    int n, dem=1, h;
    scanf("%d", &n);
    while(dem<=n){
        if(dem%2==0) h=2;
        else h=1;
        for(int i=0;i<dem;i++)
            printf("%d", h+2*i);
        printf("\n");
        dem++;
    }
}