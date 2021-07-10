#include <stdio.h>
int Ktra(long long n){
    int s=0, cnt=0;
    long long t=0;
    long long tmp=n;
    while(tmp>0){
        int l=tmp%10;
        if(l==6) cnt++;
        s+=l;
        t=t*10+l;
        tmp/=10;
    }
    if(t==n && cnt>0 && s%10==8) return 1;
    else return 0;
}
int main(){
    long long a, b, max, min;
    scanf("%lld%lld", &a, &b);
    if(a>b){ 
        max=a;
        min=b;
    }
    else{ 
        max=b;
        min=a;
    }
    for(long long i=min;i<=max;i++){
        if(Ktra(i)==1) printf("%lld ", i);
    }
}

