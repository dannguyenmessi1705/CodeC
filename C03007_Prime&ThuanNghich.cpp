#include <stdio.h>
#include <math.h>
int TN(int n){
    int s=0;
    int tmp=n;
    while(tmp>0){
        int k=tmp%10;
        s=s*10+k;
        tmp/=10;
    }
    if (s==n) return 1;
    else return 0;
}
int Prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int a,b,n,k;
    scanf("%d", &k);
    while(k--){
        scanf("%d%d", &a, &b);
        int dem=0;
        if(a>10 && a<b && b<pow(10,6)){
            for(int i=a;i<=b;i++){
                if(TN(i)==1 &&Prime(i)==1){ 
                    dem++;
                    printf("%d ", i);
                    if(dem%10==0) printf("\n");
                }
            }
        }
        else return 0;
        printf("\n\n");
    }
}

