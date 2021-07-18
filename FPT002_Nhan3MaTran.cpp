#include <stdio.h>
int a[100][100], b[100][100], c[100][100], tmp1[100][100], tmp2[100][100], m, n, p, q;
void Nhap(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=1;i<=p;i++){
        for(int j=1;j<=q;j++){
            scanf("%d", &c[i][j]);
        }
    }
}
void Tinh(){
    for(int i=1;i<=m;i++){
        int k=1;
        while(k<=p){
            tmp1[i][k]=0;
            for(int j=1;j<=n;j++){
                tmp1[i][k]=tmp1[i][k]+a[i][j]*b[j][k];
            }
            k++;
        }
    }
    for(int i=1;i<=m;i++){
        int h=1;
        while(h<=q){
            tmp2[i][h]=0;
            for(int j=1;j<=p;j++){
                tmp2[i][h]=tmp2[i][h]+tmp1[i][j]*c[j][h];
            }
            printf("%d ", tmp2[i][h]);
            h++;
        }
        printf("\n");
    } 

}
int main(){
    scanf("%d%d%d%d", &m, &n, &p, &q);
    Nhap();
    Tinh();
}