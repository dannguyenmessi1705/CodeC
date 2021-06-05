#include <stdio.h>
int m,n;
void Nhap(int a[][100]){
    scanf("%d%d", &m, &n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) scanf("%d", &a[i][j]);
    }    
}
void Xuat(int a[][100]){
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            printf("%d ", a[i][j]);
    }
    printf("\n");
}
}
int main(){
    int a[100][100];
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
    Nhap(a);
    printf("Test %d:\n", i);
    Xuat(a);
    }
}