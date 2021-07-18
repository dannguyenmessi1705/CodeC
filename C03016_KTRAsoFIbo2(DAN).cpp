#include <stdio.h>
typedef unsigned long long ng;
int Fibo(ng n){
    ng fibo1=0, fibo2=1, fibon=0;
    while(fibo1+fibo2<=n){
        fibon=fibo1+fibo2;
        fibo1=fibo2;
        fibo2=fibon;
    }
    if(fibon==n) return 1;
    else return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    ng n;
    while(t--){
    scanf("%llu", &n);
    if(Fibo(n)) printf("YES\n");
    else printf("NO\n");
    }
}