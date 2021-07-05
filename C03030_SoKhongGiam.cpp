#include <stdio.h>
#include <math.h>
int Kt(int i){
    int l=i%10;
    i/=10;
    while(i>0){
        int l1=i%10;
        if(l1>l) return 0;
        l=l1;
        i/=10;
    }
    return 1;
}
void Xuat(int n){
    int start = pow(10,n-1);
    int end = pow(10,n);
    for(int i=start+1;i<end;i++){
        if(i%10==0) continue;
        if(Kt(i)==1) printf("%d ", i);
        else continue;
    }
}
int main(){
    int n,k;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        Xuat(n);
        printf("\n");
    }
}