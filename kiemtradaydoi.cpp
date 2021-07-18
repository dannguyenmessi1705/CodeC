#include <stdio.h>
void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
int Doi(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a[10];
    int n, k;
    scanf("%d", &k);
    while(k--){
    scanf("%d", &n);
    Nhap(a, n);
    if (Doi(a, n)) printf("YES\n");
    else printf("NO\n");
   
}
}