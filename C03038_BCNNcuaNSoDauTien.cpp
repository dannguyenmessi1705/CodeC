#include <stdio.h>
long long BSNN(long long a, long long b){
    long long ucln=0;
    long long x=a, y=b;
    if(a<=0 || b<=0) b=0;
    while(a!=0){
        long long tmp=a;
        a=b%a;
        b=tmp;
    }
    ucln=b;
    return (x*y)/ucln; 
}
int main(){
    long long n,t;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        long long tmp=1;
        for(int i=1;i<=n;i++){
            tmp=BSNN(tmp,i);
        } 
        printf("%lld\n", tmp);
    }
}