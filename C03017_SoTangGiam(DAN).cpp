#include <stdio.h>
#include <math.h>
typedef unsigned long long ng;
int Prime(ng n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int KtraGiam(ng n){
    int l=n%10;
    n/=10;
        while(n>0){
            int l1=n%10;
            if(l1>=l) return 0;
            l=l1;
            n/=10;
        }
        return 1;
    }
int KtraTang(ng n){
    int l=n%10;
    n/=10;
        while(n>0){
            int l1=n%10;
            if(l1<=l) return 0;
            l=l1;
            n/=10;
        }
        return 1;
}
int main(){
    int t;
    ng n;
    scanf("%d", &t);
    while(t--){
        scanf("%llu", &n);
        ng start=pow(10,n-1);
        ng end=pow(10,n);
        int dem=0;
        for(ng i=start;i<end;i++){
            if((KtraGiam(i)==1 || KtraTang(i)==1) && Prime(i)==1){
                dem++;
            }
        }
        printf("%d\n", dem);
    }
}
