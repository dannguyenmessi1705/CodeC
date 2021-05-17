#include <stdio.h>
void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
bool Doi(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int a[10];
    int n, k;
    scanf("%d", &k);
    while(k--){
        do {
            scanf("%d", &n);
    }
    while(n<0 || n>10);
    Nhap(a, n);
    if (Doi(a, n)) printf("YES\n");
    else printf("NO\n");
   
}
}