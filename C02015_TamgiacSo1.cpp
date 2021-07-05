#include <stdio.h>
int main(){
    int n, dem=1;
    scanf("%d", &n);
    int day=2*n-1;
    while(dem<=n){
        for(int i=1;i<=2*dem-1;i++)
            printf("%d", i);
            printf("\n");
            dem++;
    }
}