#include <stdio.h>
#include <math.h>
int Ktra(unsigned long long n){
    unsigned long long s=0;
    unsigned long long tmp=n;
    while(tmp>0){
        int k=tmp%10;
        s=s*10+k;
        tmp/=10;
    }
    if (s==n) return 1;
    else return 0;
}
int dem(unsigned long long n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
int Sodep(unsigned long long n){
    int f=n/pow(10,dem(n)-1);
    int l=n%10;
    unsigned long long tmp=n/10;
    unsigned long long tmp1=tmp-f*pow(10,dem(tmp)-1);
    if(f==2*l || l==2*f)
        if(Ktra(tmp1)==1) return 1;
    else return 0;
}
int main(){
    unsigned long long n;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%llu", &n);
        if(Sodep(n)==1) printf("YES\n");
        else printf("NO\n");
    }
}