#include <stdio.h>
void TaoMT(int a[100][100], int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            a[i][j]=j-i;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100], n;
    scanf("%d", &n);
    TaoMT(a,n);
}