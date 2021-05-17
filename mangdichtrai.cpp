#include <stdio.h>
void Nhap(int a[], int n){
    for  (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[100], n, k;
    do{
    scanf("%d", &n);
    }
    while(n<1 || n>100);
    Nhap(a, n);
    scanf("%d", &k);
    for (int j=0;j<k;j++){
        for (int i=0;i<n-1;i++){
            int tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;
        }
}
    Xuat(a, n);
}