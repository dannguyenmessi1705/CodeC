/* 
Nhập các số từ mảng, sắp xếp lại các số đó từ bé đến lớn
*/
#include <stdio.h>
int swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
int main(){
    int a[100], n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    }
    while(n<0 || n>100);
    Nhap(a, n);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i] > a[j]){
                swap(a[i], a[j]);
            }


        }
    }
    printf("Mang da sap xep theo thu tu la: ");
    for (int j=0;j<n;j++){
        printf("%d\t", a[j]);
    }
}
