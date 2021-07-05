#include <stdio.h>
int Check(int n){
    int s=0, tmp=n;
    while(tmp>0){
        int l=tmp%10;
        s=s*10+l;
        tmp/=10;
    }
    if(s==n) return 1;
    else return 0;
}
int Check1(int n){
    while(n>0){
        int l=n%10;
        if(l==9) return 0;
        n/=10;
    }
    return 1;
}
void Xuat(int n){
    for(int i=2;i<=n;i++){
        if(Check1(i)==1 && Check(i)==1) printf("%d ", i);
    }
    printf("\n");
}
int Dem(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(Check1(i)==1 && Check(i)==1) count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    Xuat(n);
    printf("%d", Dem(n));
}