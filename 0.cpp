#include <stdio.h>
typedef struct Phanso{
    long long tu;
    long long mau;
} PS;
long long UCLN(long long a, long long b){
    if(a<=0 || b<=0) return 0;
    while(a!=0){
        long long tmp=a;
        a=b%a;
        b=tmp;
    }
    return b;
}
long long BCNN(long long a, long long b){
    return (a*b)/UCLN(a,b);
}
void Qd(PS x, PS y){
    PS tmp;
    tmp.mau=BCNN(x.mau,y.mau);
    x.tu=x.tu*(tmp.mau/x.mau);
    y.tu=y.tu*(tmp.mau/y.mau);
    printf("%lld/%lld %lld/%lld\n", x.tu, tmp.mau, y.tu, tmp.mau);
}
void Sum(PS x, PS y){
    PS tmp;
    tmp.mau=BCNN(x.mau,y.mau);
    x.tu=x.tu*(tmp.mau/x.mau);
    y.tu=y.tu*(tmp.mau/y.mau);
    PS tmp1;
    tmp1.tu=x.tu+y.tu;
    tmp1.mau=tmp.mau;
    printf("%lld/%lld\n", tmp1.tu/UCLN(tmp1.tu, tmp.mau), tmp.mau/UCLN(tmp1.tu, tmp.mau));
}
void Div(PS x, PS y){
    PS tmp;
    tmp.tu=x.tu*y.mau;
    tmp.mau=x.mau*y.tu;
    printf("%lld/%lld\n", tmp.tu/UCLN(tmp.tu, tmp.mau), tmp.mau/UCLN(tmp.tu, tmp.mau));
}
int main(){
    PS x, y;
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%lld%lld%lld%lld", &x.tu, &x.mau, &y.tu, &y.mau);
        printf("Case #%d:\n", i);
        Qd(x,y);
        Sum(x,y);
        Div(x,y);
    }
}