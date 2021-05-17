#include <stdio.h>
#include <stdbool.h>
void Nhap(int a[100], int n){
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
bool Doi(int a[], int n){
    for (int i=0;i<n/2;i++){
        if (a[i] != a[n-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int a[100], n, k;
    scanf("%d", &k);
    while(k--){
        do{
        scanf("%d", &n);
        }
        while(n<0 || n>100);
        Nhap(a, n);
        if (Doi(a, n)) printf("YES\n");
        else printf("NO\n");

    }
}