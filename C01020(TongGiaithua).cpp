#include <stdio.h>
unsigned long long GT(int n){
    if(n==0 || n==1) return 1;
    return n * GT(n-1);
}
unsigned long long TongGT(int n){
    unsigned long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=GT(i);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%llu", TongGT(n));
}