#include <stdio.h>
#include <math.h>
int Prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int Gt(int n){
    int dem=0, i=2;
    while(dem<n){
            if(Prime(i)==1) dem++;
            i++;
        }
    return --i;
}
void TaoMT(int a[100][100], int n){
    int k=1, cot=n, hang=n, gt=1;
    while(k<=n/2+1){
        for(int i=k;i<=cot;i++) a[k][i]=Gt(gt++);
        for(int i=k+1;i<=hang;i++) a[i][cot]=Gt(gt++);
        for(int i=cot-1;i>=k;i--) a[hang][i]=Gt(gt++);
        for(int i=hang-1;i>k;i--) a[i][k]=Gt(gt++);
        k++; hang--; cot--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int t,n, a[100][100];
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%d", &n);
        printf("Test %d:\n", i);
        TaoMT(a,n);
        printf("\n");
    }
    
}