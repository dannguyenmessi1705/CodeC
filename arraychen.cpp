#include <stdio.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
void Chen(int a[], int n, int b[], int m, int c){
    for (int i=n+m-1;i>=c;i--){
        a[i] = a[i-m];
    }
    for (int i=c;i<c+m;i++){
        a[i] = b[i-c];

    }
}
int main(){
    int a[100], b[100], n, m, c;
    scanf("%d%d", &n, &m);
    Nhap(a, n);
    Nhap(b, m);
    do{
        scanf("%d", &c);
    }
    while (c<0 || c>n);
    Chen(a, n, b, m, c);
    Xuat(a, n+m);
}