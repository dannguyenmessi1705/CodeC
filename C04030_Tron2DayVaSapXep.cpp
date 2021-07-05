#include <stdio.h>
int a[100], b[100], c[200];
void swap(int *x, int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void Nhap(int a[], int b[], int n){
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) scanf("%d", &b[i]);
}
void Sapxep(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(&a[i], &a[j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]) swap(&b[i], &b[j]);
        }
    }
}
void Merge(int a[], int b[], int n){
    int N=2*n;
    int tmp=0;
    for(int i=0;i<N;i++){
        if(i%2==0){
            c[i]=a[i-tmp];
            tmp++;
        }
        if(i%2==1) c[i]=b[i-tmp];
    }
}
void Xuat(int c[], int n){
    int N=2*n;
    for(int i=0;i<N;i++){
        printf("%d ", c[i]);
    }
    printf("\n");
}
int main(){
    int n,t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%d", &n);
        Nhap(a,b,n);
        Sapxep(a,b,n);
        Merge(a,b,n);
        printf("Test %d:\n", i);
        Xuat(c,n);

    }
}