#include <stdio.h>
int a[100];
int n, mina, minb, k;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Min1(){
    mina=__INT_MAX__;
    for (int i=0;i<n; i++){
        if (a[i]<mina) mina=a[i];
}
printf("%d", mina);
}
void Min2(){
    minb=__INT_MAX__;
    for(int i=0;i<n;i++){
        if(a[i]<minb && a[i]!=mina) minb=a[i];
    }
    printf(" %d", minb);
}
int main(){
    Nhap();
    for(int i=1;i<n;i++){
        if(a[0] != a[i]){
            k=1;
            break;
        }
        if(a[0] == a[i]) k=0;
    }
    if(k==0) return 0;
    Min1();
    Min2();
    return 0;
}