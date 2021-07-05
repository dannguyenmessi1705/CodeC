#include <stdio.h>
int a[101][101], hang, cot, n, gt=1, k=1;
void Mt(){
    hang=n; cot=n;
    while(k<=(n/2)+1){
        for(int i=k;i<=cot;i++) a[k][i]=gt++;
        for(int i=k+1;i<=hang;i++) a[i][cot]=gt++;
        for(int i=cot-1;i>=k;i--) a[hang][i]=gt++;
        for(int i=hang-1;i>k;i--) a[i][k]=gt++; 
        k++; cot--; hang--;
    }
}
void Xuat(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) printf("%d ", a[i][j]);
        printf("\n");
}
}
int main(){
    scanf("%d", &n);
    Mt();
    Xuat();
}