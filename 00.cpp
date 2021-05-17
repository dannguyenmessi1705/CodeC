#include <stdio.h>
void Nhap(int a[][100],int m, int n){
    for (int i=0;i<m;i++){
         for (int j=0;j<n;j++){
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
    }
    }
   
}
void Xuat(int a[][100], int m, int n){
    for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                printf("%d\t", a[i][j]);
    }
            printf("\n");
    }

}
int main(){
    int a[100][100], m ,n;
    scanf("%d%d", &m, &n);
    Nhap(a,m,n);
    Xuat(a,m,n);
}