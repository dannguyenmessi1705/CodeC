#include <stdio.h>
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void Sapxep(int a[], int n){
    int i, j;  
    for(i=0;i<n-1;i++){        
        for(j=0;j<n-i-1;j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);    
            }
        }
}
}
void Xuat(int a[], int n){
    for(int i=0;i<n;i++){
    printf("%d", a[i]);
}
}
int main(){
    int a[100], n;
    do{
        scanf("%d", &n);
    }
    while(n<0 || n>100);
    Nhap(a, n);
    Sapxep(a, n);
    Xuat(a, n);
}