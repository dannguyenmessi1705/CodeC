#include <stdio.h>
int a[100], b[100], n;
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=1;
    }
}
void Loai(){
    for(int i=0;i<n;i++){
        if(b[i]){
            b[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]) b[j]=0;
            }
            printf("%d ", a[i]);
        }
    }
}
int main(){
    scanf("%d", &n);
    Nhap(a, n);
    Loai();
}