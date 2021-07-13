#include <stdio.h>
void Nhap(int a[50][50], int m, int n){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int x, y, tmp[50][50];
    scanf("%d%d", &x, &y);
    for(int i=1;i<=n;i++){
        tmp[x][i]=a[x][i];
        a[x][i]=a[y][i];
        a[y][i]=tmp[x][i];
    }

}
void Xuat(int a[50][50], int m, int n){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main(){
    int m, n, a[50][50], x, y;
    scanf("%d%d", &m, &n);
    Nhap(a,m,n);
    Xuat(a,m,n);
}