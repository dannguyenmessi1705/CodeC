#include <stdio.h>
void Nhap(long a[], int n){
    for(int i=0;i<n;i++) scanf("%ld", &a[i]);
}
void Max(long a[], int n){
    long max1=a[0],max2=0, tmp=a[0];
    int ktd=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) ktd=1;
        else 
            if(a[i]>max1) max1=a[i];
    }
    if(ktd==0) printf("%ld\n", max1);
    else{
        for(int i=0;i<n;i++){
            max2+=a[i];
            if(max2<0){
                max2=0;
                continue;
            }
            if(max2>tmp) tmp=max2;
        }
        printf("%ld\n", tmp);
    }
}
int main(){
    int t,n;
    long a[100000];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        Nhap(a,n);
        Max(a,n);
    }
}