#include <stdio.h>
#include <math.h>
int n, a[50][50];
void Nhap(int a[50][50], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
    }
}
}
int Prime(int x){
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int Sum(int a[50][50], int n){
    int sum=0, z=1;
    for(int i=1;i<=n;i++){
        for(int j=z;j<=n;j++){
            int x=a[i][j];
            if(Prime(x)==1) sum+=x;
        }
        z++;
    }
    return sum;
}
int main(){
    scanf("%d", &n);
    Nhap(a,n);
    printf("%d", Sum(a,n));
}