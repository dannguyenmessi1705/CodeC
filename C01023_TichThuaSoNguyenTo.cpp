#include <stdio.h>
#include <math.h>
long long Tich(int x){
    int tich=1, y=0;
    while(x%2==0){
        y++;
        if(y==1)
            tich*=2;
        x/=2;
    }
    for(int i=3;i<=sqrt(x);i+=2){
        y=0;
        while(x%i==0){
            y++;
            if(y==1) tich*=i;
            x/=i;
        }
    }
    if(x>2) tich*=x;
    return tich;
}
int main(){
    int n, x;
    long long tich;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &x);
        printf("%lld\n", Tich(x));
    }
}