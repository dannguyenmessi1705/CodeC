#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a[150][150];
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(int i=1;i<=n;i++){
            if(i%2==1){
                for(int j=1;j<=n;j++) printf("%d ", a[i][j]);
            }
            else{
                for(int j=n;j>=1;j--) printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}