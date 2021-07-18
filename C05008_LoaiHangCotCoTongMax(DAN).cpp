#include <stdio.h>
void Nhap(int a[][20], int m, int n){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void RMax(int a[][20], int m, int n){
    int max, sum=0, row=0;
    for(int i=1;i<=m;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            sum+=a[i][j];
        }
        if(sum>max){
            max=sum;
            row=i;
        }
    }
    for(int i=row;i<=m;i++){
      for(int j=1;j<=n;j++){
            a[i][j]=a[i+1][j];
        }
        m--;
    }
}
void CMax(int a[][20], int m, int n){
    int max=0, sum=0, collum=0;
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=m-1;j++){
            sum+=a[j][i];
        }
        if(sum>max){
            max=sum;
            collum=i;
        }
    }
    for(int i=collum;i<=n;i++){
        for(int j=1;j<=m-1;j++){
            a[j][i]=a[j][i+1];
        }
        n--;
    }
}
int main(){
    int a[20][20], t, m, n, dem=1;;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &m, &n);
        Nhap(a,m,n);
        RMax(a,m,n);
        CMax(a,m,n);
        printf("Test %d:\n", dem);
        for(int i=1;i<=m-1;i++){
            for(int j=1;j<=n-1;j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        dem++;
    }
}