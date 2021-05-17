#include<stdio.h> 
#include<math.h> 
int Dep(int n) {
    int t=0; 
    for(int i=1;i<=n/2;i++){
    if(n%i==0) t=t+i;
    }
    return t; 
} 
int Ktra(int n) {
    if(Dep(n)==n) return 1;
} 
int Prime(int p) {
    int i; 
    if(p<2) 
    return 1; 
    else {
        for(i=2;i<=sqrt(p);i++){
        if(p%i==0) return 0;
        }
    } 
            return 1; 
    } 
int Lke(int x){
    return pow(2,x-1)*(pow(2,x)-1);
    } 
int main() {
    int n,a; 
    do scanf("%d",&n); 
    while(n>9999999); 
    for(int i=2;Lke(i)<n;i++) {
        a=pow(2,i)-1; 
        if(Prime(a)==1) printf("%d ",Lke(i));
    }
        return 0; 
}