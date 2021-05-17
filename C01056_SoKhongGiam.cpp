#include <stdio.h>
int main(){
    int k, t;
    unsigned long long n;
    scanf("%d", &k);
    while(k--){
        scanf("%llu", &n);
        while(n>0){
            int l=n%10;
            n/=10;
            int f=n%10;
            if (l>=f){
                t=1;
                continue;
            }
            else {
                t=0;
                break;
            }
        }
        if (t==1) printf("YES\n");
        else printf("NO\n");
    }
}