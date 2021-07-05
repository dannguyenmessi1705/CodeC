#include <stdio.h>
int main(){
    int n, dem=1, h, count;
    scanf("%d", &n);
    while(dem<=n){
        h=0;
        count=n-1;
        for(int i=1;i<=dem;i++){
            char c=64+dem;
            printf("%c ", c+h);
            h=h+count;
            count--;
        }
        printf("\n");
        dem++;
    }
}