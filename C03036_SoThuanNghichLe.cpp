#include <stdio.h>
int dem(long long n){
    int s=0;
    while(n>0){
        int k=n%10;
        if(k%2==0) return 0;
        s+=k;
        n/=10;
    }
    if(s%2==1) return 1;
    else return 0;
}
int tong(long long n){
    long long tmp=n;
    long long s=0;
    while(tmp>0){
        int k=tmp%10;
        s=s*10+k;
        tmp/=10;
    }
    if(s==n) return 1;
    else return 0;
}
int main(){
    int t;
    long long  n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(dem(n)==1 && tong(n)==1) printf("YES\n");
        else printf("NO\n");
    }

}