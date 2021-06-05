#include <stdio.h>
int m,n;
void Nhap(int a[][100], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) scanf("%d", &a[i][j]);
    }
}
void Xuat(int a[][100], int m, int n){
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++) printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main(){
    int a[100][100];
    scanf("%d%d", &m, &n);
    Nhap(a,m,n);
    Xuat(a,m,n);
}