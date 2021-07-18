#include <stdio.h>
void Nhap(int a[100][100], int n){
    int c[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i) a[i][j]=j;
            else a[i][j]=0;
        }
    }
}
void CV(int a[100][100], int n){
    int b[100][100];
    int c[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=1;i<=n;i++){
        int k=1;
        while(k<=n){
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
    int a[100][100], n, t, dem=1;;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        Nhap(a,n);
        printf("Test %d:\n", dem);
        CV(a,n);
        dem++;
        fflush(stdin);
        printf("\n");
}
}