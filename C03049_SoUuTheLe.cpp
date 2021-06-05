#include <stdio.h>
int ktra(long long n){
    int le=0,chan=0;
    long long tmp=n;
    if(n%2==1){
        while(tmp>0){
            long long a=tmp%10;
            if(a%2==0) chan++;
            else le++;
            tmp/=10;
        }  
          }
    else return 0;
    if(le>chan && n%2==1) return 1;
    else return 0;
}
int main(){
    long long n;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        if(ktra(n)==1) printf("YES\n");
        else printf("NO\n");
    }
}