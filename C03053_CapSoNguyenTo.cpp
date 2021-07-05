#include <stdio.h>
#include <math.h>
int Prime(int i){
    if(i<2) return 0;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) return 0;
    }
    return 1;
}
int Ktra(int n){
    for(int i=2;i<=n/2;i++){
        if(Prime(i)==1){
            for(int j=n;j>=n/2;j--){
                if(i+j==n){
                    if(Prime(j)==1) printf("%d %d ", i, j); }
            }
        }
    }
}
int main(){
    int n,t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &n);
    Ktra(n);
    printf("\n");
}
}