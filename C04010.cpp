#include <stdio.h>
int a[100];
int n, mina, minb;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void Min(){
    mina = minb = a[0];
for (int i=1; i < n; i++){
    if (a[i]<mina) mina=a[i];
}
for (int i=1;i<n;i++){
    if (a[i]<minb && a[i]!=mina) minb=a[i];
}
printf("%d %d", mina, minb);
}
int main(){
    Nhap();
    Min();
}