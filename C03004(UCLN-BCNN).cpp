#include <stdio.h>
unsigned long UCLL(unsigned long a, unsigned long b){
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
unsigned long BCNN(unsigned long a, unsigned long b){
    return (a*b)/UCLL(a, b);
}
int main(){
    unsigned long a,b;
    scanf("%lu %lu", &a, &b);
    printf("%lu\n%lu", UCLL(a,b), BCNN(a,b));
    return 0;
}