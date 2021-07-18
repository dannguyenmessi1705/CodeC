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
    long long a,b,t,max,min;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld", &a, &b);
        if(a>=b){
            max=a;
            min=b;
        }
        else{
            max=b;
            min=a;
        }
        long long tmp=min;
        for(int i=min;i<=max;i++){
            tmp=BSNN(tmp,i);
        } 
        printf("%lld\n", tmp);
    }
}