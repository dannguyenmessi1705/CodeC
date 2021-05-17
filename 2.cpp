#include <stdio.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void Sapxep(int a[], int n){
    int tmp, count=0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}