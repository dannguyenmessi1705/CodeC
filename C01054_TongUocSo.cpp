#include <stdio.h>
#include <math.h>
long long Sum(int x){
    int sum=0;
    while(x%2==0){
        sum+=2;
        x/=2;
    }
    for(int i=3;i<=sqrt(x);i+=2){
        while(x%i==0){
            sum+=i;
            x/=i;
        }
    }
    if(x>2) sum+=x;
    return sum;
}
int main(){
    int n, x;
    long long sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &x);
        sum+=Sum(x);
    }
    printf("%lld", sum);
}