#include <stdio.h>
int a[100], b[100], c[100], n;
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=1;
        c[i]=1;
    }
}
void Lke(){
    for(int i=0;i<n;i++){
        int count=0;
        if(b[i]){
            b[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    count++;
                    b[j]=0;
                }
            }
        }
        if(count>0){
            printf("%d ", a[i]);
        }
    }
}
int Dem(){
    int dem = 0;
    for(int i=0;i<n;i++){
        int count=0;
        if(c[i]){
            c[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i]){
                    count++;
                    c[j]=0;
                }
            }
        }
        if(count>0){
            dem++;
        }
    }
    return dem;
}
int main(){
    scanf("%d", &n);
    Nhap(a, n);
    printf("%d\n", Dem());
    Lke();
}
