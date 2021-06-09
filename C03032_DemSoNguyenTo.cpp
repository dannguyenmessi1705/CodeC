#include <stdio.h>
#include <math.h>
int Prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int Prime2(int n){
    if(Prime(n)==1){
        while(n>0){
        int tmp=n%10;
        if(Prime(tmp)==0) return 0;
        n/=10;
        }
        return 1;
    }
    else return 0;
}
int Out(int a, int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(Prime(i)==1 && Prime2(i)==1) count++;
    }
    return count;
}
int main(){
    int t,a,b;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        printf("%d\n", Out(a,b));
    }
}