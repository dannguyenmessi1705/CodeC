#include <stdio.h>
void Nhap(int a[], int n){
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
}
void Xuat(int a[], int n){
    int check=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                check=1;
                printf("%d\n", a[i]);
                break;
            }
        }
        if(check==1) break;
    }
    if(check==0) printf("NO\n");
}
int main(){
    int t,n,a[100000];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        Nhap(a,n);
        Xuat(a,n);
    }
}