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
int main(){
    int a[100], b[100], n, m, k;
    scanf("%d%d", &n, &m);
    Nhap(a, n);
    Nhap(b, m);
    scanf("%d", &k);
    for (int i=0;i<k;i++){
        printf("%d ", a[i]);
        }
    Xuat(b, m);
    for (int i=k;i<n;i++){
        printf("%d ", a[i]);
    }
    
}