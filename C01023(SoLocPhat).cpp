#include <stdio.h>
int Ktra(int n){
    if(n==0 || n==6 || n==8){
        return 1;
    }
    return 0;
}
int main(){
    int n,k,c;
    scanf("%d", &k);
    while(k--){
        c=0;
        scanf("%d", &n);
        while(n>0){
            int f=n%10;
            n/=10;
            if (Ktra(f)==0){
                c=1;
                break;
        }
        }
        if(c==1) printf("NO\n");
        else printf("YES\n");
    }
}