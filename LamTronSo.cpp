#include <stdio.h>
#include <math.h>
int main(){
    int t;
    long long n, dem, sum=0;
    scanf("%d", &t);
    while(t--){
        sum=0, dem=0;
        scanf("%lld", &n);
        if(n<=10){
            printf("%lld\n", n);
        }
        else{
            int l=n%10;
            int l1;
            n/=10;
            while(n>0){
                dem++;
                l1=n%10;
                if(l>=5){
                    l=0;
                    l1+=1;
                }
                else l=0;
                n/=10;
                l=l1;
                }
            sum=(sum+l1)*pow(10,dem);  
            printf("%d\n", sum);
        }
        }
    }