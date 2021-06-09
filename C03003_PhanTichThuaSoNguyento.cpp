#include <stdio.h>
void Nto(int n){
    int i, count=0;
    for(i=2;i<=n;i++){
        if(n%i==0){
            n/=i;
            count++;
            if(i<=n){
                i--;
                continue;
            }
        }
        if(count>0){
            printf("%d^%d", i, count);
            if(i<n) printf(" * ");
            count=0;
        }
}
}
int main(){
    int n,t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &n);
    printf("%d = ", n);
    Nto(n);
    printf("\n");
    }
}
