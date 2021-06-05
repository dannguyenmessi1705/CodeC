#include <stdio.h>
long long UCLL(unsigned long long a, int b){
    if(a<=0 || b<=0){
        return 0;
    }
    while (a!=0){
        int tmp=a;
        a=b%a;
        b=tmp;
    }
    return b;
}
long long BCNN(unsigned long long a, int b){
    return (a*b)/UCLL(a, b);
}
int main(){
    int b,k;
    unsigned long long a;
    scanf("%d", &k);
    if(k<1 || k>100) return 0;
    while(k--){
    scanf("%llu %d", &a, &b);
    if(a>=1 && b<=100000000)
    printf("%lld %lld", BCNN(a,b), UCLL(a,b));
    else return 0;
    printf("\n");
    }
}