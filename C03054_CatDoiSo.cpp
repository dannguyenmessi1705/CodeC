#include <stdio.h>
#include <math.h>
int main(){
    int t,i=0;
    unsigned long long n, sum=0;
    scanf("%d", &t);
    while(t--){
        scanf("%llu", &n);
        while(n>0){
            int l=n%10;
            if(l==1) l=1;
            else if(l==0) l=0;
            else if(l==8) l=0;
            else if(l==9) l=0;
            else{
                sum=0;
                break;
            }
            sum+=l*pow(10,i);
            i++;
            n/=10;
    }
    if(sum>0) printf("%llu\n", sum);
    if(sum==0) printf("INVALID\n");
    sum=0;
    i=0;
}
}
