#include <stdio.h>
int main(){
    int n, dem=1;
    scanf("%d", &n);
    while(dem<=n){
        for(int i=1;i<=n-dem;i++)
            printf("~");
        for(int i=0;i<dem;i++)
            printf("%d", 2+2*i);
        for(int i=dem;i>1;i--)
            printf("%d", 2*i-2);
        printf("\n");
        dem++;
    }
}