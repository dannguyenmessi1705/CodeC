#include <stdio.h>
int main(){
    int n, dem=1, gt=1, k;
    scanf("%d", &n);
    while(dem<=n){
        if(dem%2==1){
            for(int i=1;i<=dem;i++){
                printf("%d ", gt++);
            }
        }
        else{
            for(int i=1;i<=dem;i++){
                k=--gt+dem;
                printf("%d ", k);
            }
            gt=k+dem;
        }
            printf("\n");
        dem++;
    }
}