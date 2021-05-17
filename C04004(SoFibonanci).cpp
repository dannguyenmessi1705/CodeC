#include <stdio.h>
long long Fibo(long long n){
    if (n==1 || n==2){
        return 1;
    }
    if(n>2){
        long long n1=1, n2=1, nn;
        for(long long i=3;i<=n;i++){
            nn=n1+n2;
            n1=n2;
            n2=nn;
        }
        return nn;
    }

}
int main(){
    int k;
    long long n;
    scanf("%d", &k);
    while(k--){
    scanf("%lld", &n);
    printf("%lld\n", Fibo(n));
}
}