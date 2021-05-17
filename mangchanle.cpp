#include <stdio.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
int Kt(int n){
    if (n % 2 != 0){
            return 0;
        }
    return 1;
}
void Chan(int a[], int n){
    for (int i=0;i<n;i++){
        if (Kt(a[i])==1){
            printf("%d ", a[i]);
        }
    }
}
void Le(int a[], int n){
    for (int i=0;i<n;i++){
        if (Kt(a[i])==0){
            printf("%d ", a[i]);
        }
    }
}
int main(){
    int a[100], n;
    do{
        scanf("%d", &n);
    }
    while(n<0 || n>100);
    Nhap(a, n);
    Chan(a, n);
    printf("\n");
    Le(a, n);
    
}