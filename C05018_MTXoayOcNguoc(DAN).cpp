#include <stdio.h>
void MaTran(int a[100][100], int n){
    int gt=n*n;
    int k=1, hang=n, cot=n;
    while(k<=n/2+1){
        for(int i=k;i<=cot;i++) a[k][i]=gt--;
        for(int i=k+1;i<=hang;i++) a[i][cot]=gt--;
        for(int i=cot-1;i>=k;i--) a[hang][i]=gt--;
        for(int i=hang-1;i>k;i--) a[i][k]=gt--;
        k++; hang--; cot--;
}
}
void Xuat(int a[100][100], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100], n, t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%d", &n);
        MaTran(a,n);
        printf("Test %d:\n", i);
        Xuat(a,n);
        printf("\n");
    }
}