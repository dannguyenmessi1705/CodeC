#include <stdio.h>
int Prime(int n){
    if (n<2){
    return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
             return 0;
    }
    }
    return 1;
}
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for(int i=0;i<n;i++){
        if(Prime(a[i])==1){
        printf("%d ", a[i]);
    }
    }
    printf("\n");
}
int main(){
    int a[100], n, t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        Nhap(a,n);
        Xuat(a,n);

}
}