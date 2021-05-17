#include <stdio.h>
#include <math.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void InsertionSort(int a[], int n){
    int i, k, j;
    for (i=1;i<n;i++){
        k = a[i];
        j = i-1;
        while (j>=0 && a[j]<k){
            a[j+1]=a[j];
            j = j-1;
        }
        a[j+1] = k;
    }
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d", a[i]);
    }
}
int main(){
    int a[100], n;
    do{
        scanf("%d", &n);
    }
    while (n<0 || n>100);
    Nhap(a, n);
    InsertionSort(a, n);
    Xuat(a, n);
    return 0;
}