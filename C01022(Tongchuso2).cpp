#include <stdio.h>
int main(){
    int n,k;
    scanf("%d", &k);
    while(k--){
        int sum=0;
        scanf("%d", &n);
        while(n>0){
            int f=n%10;
            sum+=f;
            n/=10;
        }
        printf("%d\n", sum);
    }
}