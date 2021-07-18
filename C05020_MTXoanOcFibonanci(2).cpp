#include <stdio.h>
unsigned long long Fibo(int n){
    int a=0;
    if(n==1) return a;
    else if(n==2 || n==3) return 1;
    else{
        unsigned long long n2=1, n3=1, nn;
        for(int i=4;i<=n;i++){
            nn=n2+n3;
            n2=n3;
            n3=nn;
        }
        return nn;
    }
}
void Nhap(unsigned long long a[][10], int n){
    int hang=n, cot=n, k=1, gt=1;
    while(k<=(n/2)+1){
        for(int i=k;i<=cot;i++){
            a[k][i]=Fibo(gt);
            gt++;
        }
        for(int i=k+1;i<=hang;i++){
            a[i][cot]=Fibo(gt);
            gt++;
        }
        for(int i=cot-1;i>=k;i--){
            a[hang][i]=Fibo(gt);
            gt++;
        }
        for(int i=hang-1;i>k;i--){ 
            a[i][k]=Fibo(gt);
            gt++;
        }
        k++; hang--; cot--;
    }
}
void Xuat(unsigned long long a[][10], int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) printf("%llu ", a[i][j]);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    unsigned long long a[10][10];
    Nhap(a,n);
    Xuat(a,n);
}