#include <stdio.h>
int main(){
    int n, dem=1;
    scanf("%d", &n);
    while(dem<=n){
        for(int i=0;i<dem;i++)
            printf("%c", 64+2*i);
        for(int i=dem;i>1;i--)
            printf("%c", 60+2*i);
        printf("\n");
        dem++;
    }
}