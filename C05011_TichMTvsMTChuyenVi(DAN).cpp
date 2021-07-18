#include <stdio.h>
void Nhap(int a[][100], int m, int n){
    int c[100][100];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]); 
        }
    }
}
void CV(int a[][100], int m, int n){
    int b[100][100];
    int c[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=1;i<=m;i++){
        int k=1;
        while(k<=m){
            c[i][k]=0;
            for(int j=1;j<=n;j++){
            c[i][k]=c[i][k]+a[i][j]*b[j][k];
        }
        printf("%d ", c[i][k]);
        k++;
        }
        printf("\n");
    }
}
int main(){
    int a[100][100], b[100][100], m, n, t, dem=1;;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &m, &n);
        Nhap(a,m,n);
        printf("Test %d:\n", dem);
        CV(a,m,n);
        dem++;
        printf("\n");
}
}