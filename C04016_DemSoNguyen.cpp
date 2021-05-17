#include <stdio.h>
#include <math.h>
int a[100], b[100], n;
void swap(int *y, int *z){
    int tmp=*y;
    *y = *z;
    *z = tmp;
}
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=1;
    }
}
void Sapxep(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]) swap(&a[j], &a[i]);
        }
    }
}
int Prime(int x){
    if (x<2) return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int Dem(){
    Sapxep();
    for(int i=0;i<n;i++){
        if(Prime(a[i])){
        int dem=1;
        if(b[i]){
            b[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    dem++;
                    b[j]=0;
                }
            }
            printf("%d xuat hien %d lan\n", a[i], dem);
        }
    }
    }

}
int main(){
    int k;
    scanf("%d", &k);
    for(int j=1;j<=k;j++){
        scanf("%d", &n);
        Nhap(a, n);
        printf("Test %d:\n", j);  
        Dem();
    }
}