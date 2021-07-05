#include <stdio.h>
#include <math.h>
int Prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int Check(int n){
    int s=0, count=0;
    while(n>0){
        int l=n%10;
        s+=l;
        n/=10;
    }
    if(s%5==0) count++;
    return count;
}
void Xuat(int n){
    for(int i=5;i<=n;i++){
        if(Check(i)>0 && Prime(i)==1){
            printf("%d ", i);
        }
    }
}
int Dem(int n){
    int count=0;
    for(int i=5;i<=n;i++){
        if(Check(i)>0 && Prime(i)==1) count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    Xuat(n);
    printf("\n");
    printf("%d", Dem(n));
}
