#include <stdio.h>
#include <math.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
int Prime(int n){
    if (n<2) 
    return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int Count(int a[], int n){
    int count = 0;
    for (int i=0;i<n;i++){
    if (Prime(a[i])==1) { count ++; }
    }
    return count;
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++ ){
        if (Prime(a[i])==1){
            printf("%d ", a[i]);
        }
    }
}
int main(){
    int a[98], n;
    do{
    scanf("%d", &n);
    }
    while (n<2 || n>=100);
    Nhap(a, n);
    int k = Count(a, n); 
    printf("%d ", k);
    Xuat(a, n);

}