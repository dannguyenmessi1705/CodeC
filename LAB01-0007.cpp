#include <stdio.h>
int a[100], n;
void Nhap(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
float Tb(){
    int tb=0;
    for (int i=0;i<n;i++){
        tb+=a[i];
    }
    return (float)tb/n;
}
int main(){
    Nhap();
    printf("%.3f", Tb());
}