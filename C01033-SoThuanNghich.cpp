#include <stdio.h>
int Ktra(unsigned long long n){
    unsigned long long s=0;
    unsigned long long tmp=n;
    while(tmp>0){
        unsigned long long k=tmp%10;
        s=s*10+k;
        tmp/=10;
    }
    if (s==n) return 1;
    else return 0;
}
int main(){
    unsigned int k;
    unsigned long long n;
    scanf("%u", &k);
    while(k--){
        scanf("%lld", &n);
        if (Ktra(n)==1) printf("YES\n");
        else printf("NO\n");
    }
}