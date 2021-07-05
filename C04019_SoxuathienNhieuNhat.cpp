#include <stdio.h>
int a[100], b[100], n;
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Dem(int a[], int b[], int n){
    int dem;
    for(int i=0;i<n;i++){
        b[i]=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    b[i]+=1;
            }
    }
}
}
void In(int a[], int n){
    int max=1;
    for(int i=0;i<n;i++){
        if(b[i]>=max) max=b[i];
    }
    for(int i=0;i<n;i++){
        if(b[i]==max) printf("%d ", a[i], b[i]);
    }
    printf("\n");
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &n);
    Nhap(a,n);
    Dem(a,b,n);
    In(a,n);
    }

}