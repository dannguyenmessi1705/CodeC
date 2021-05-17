#include <stdio.h>
int main(){
    int n,k,f,l;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        if(n<10 || n>999999999) return 0;
        l=n%10;
        while(n>0){
            f=n%10;
            n/=10;
        }
        if (f==l) printf("YES\n");
        else printf("NO\n");
    }
}