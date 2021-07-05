#include <stdio.h>
void swap(int *x, int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void Nhap(int a[100], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[100], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void SelectionSort(int a[100], int n){
    int min;
        for(int i=0;i<n-1;i++){
            min=i;
            for(int j=i+1;j<n;j++)
                if(a[j]<a[min]) min=j;
            if(a[i]>a[min]) swap(&a[i], &a[min]);
            Xuat(a,n);
    }
}
int main(){
    int a[100], n;
    scanf("%d", &n);
    Nhap(a,n);
    SelectionSort(a,n);
}