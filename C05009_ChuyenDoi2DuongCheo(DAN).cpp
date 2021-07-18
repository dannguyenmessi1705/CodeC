#include <stdio.h>
void Nhap(int a[50][50], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int tmp[50][50], k=0;
    for(int i=1;i<=n;i++){
        tmp[i][i]=a[i][n-k];
        a[i][n-k]=a[i][i];
        a[i][i]=tmp[i][i];
        k++;
    }

}
void Xuat(int a[50][50], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main(){
    int n, a[50][50];
    scanf("%d", &n);
    Nhap(a,n);
    Xuat(a,n);
}