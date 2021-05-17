#include <stdio.h>
int a[100];
int n, k;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Xuat(){
    for(int i=0;i<n;i++){
        if (a[i]%2==0){
            printf("%d ", a[i]);
        }
    }
}
int main(){
    scanf("%d", &k);
    while(k--){
        Nhap();
        Xuat();
        printf("\n");
    }
}