#include <stdio.h>
#include <math.h>
int n, a[50][50], f[50][50], d[50];
void Nhap(int a[50][50], int n){
    for(int i=1;i<=n;i++){
        d[i]=0;
        for(int j=1;j<=n;j++){
            f[i][j]=0;
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
void Dem(int a[50][50], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x=a[i][j];
            if(Prime(x)==1){
                d[i]++;
                f[i][j]=x;
            }
        }
    }
}
int Max(int a[50][50], int n){
    int max=1;
    for(int i=1;i<=n;i++){
        if(d[i]>max) max=d[i];
    }
    return max;
}
void Xuat(int a[50][50], int n){
    int pos=0;
    int max=Max(a,n);
    for(int i=1;i<=n;i++){
        if(d[i]==max){
            pos=i;
            printf("%d\n", pos);
            break;
        }
    }
    if(pos>0){
    for(int i=pos;i<=pos;i++){
        for(int j=1;j<=n;j++){
            if(f[pos][j]!=0) printf("%d ", f[pos][j]);
        }
    }
    }
}
int main(){
    scanf("%d", &n);
    Nhap(a,n);
    Dem(a,n);
    Xuat(a,n);
}