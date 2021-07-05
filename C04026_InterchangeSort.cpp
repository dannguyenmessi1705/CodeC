#include <stdio.h>
void swap(int *x, int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void Nhap(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void InterchangeSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(&a[i],&a[j]);
        }
        printf("Buoc %d: ", i+1); Xuat(a,n);
    }
}
int main(){
    int a[100], n;
    scanf("%d", &n);
    Nhap(a,n);
    InterchangeSort(a,n);
}