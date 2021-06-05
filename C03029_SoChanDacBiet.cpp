#include <stdio.h>
int ktra(long long n){
    int k;
    while(n>0){
        k=n%10;
        if(k%2==1) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    long long n;
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%lld", &n);
    if(ktra(n)==1) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}