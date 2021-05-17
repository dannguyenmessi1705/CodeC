#include <stdio.h>
#include <math.h>
int main(){
    long long n, d, dem1 = 0;
    scanf("%lld", &n);
    long long k=n/10;
    int c=n%10;
    while(n!=0){
        d=n%10;
        n/=10;
        dem1++;
    }
    long long h=pow(10,dem1-1);
    long long j=pow(10,dem1-2);
    long long so2=d*j;
    long long so3=((k-so2)*10)+d;
    printf("%lld", c*h+so3);
}