#include <stdio.h>
long long sqr(long long a){
    return a * a;
}
int main(){
    int n;
    long long a;
    scanf("%d", &n);
    while (n--)
    {   scanf("%d", &a);
        printf("%lld\n", sqr(a));}
    
}