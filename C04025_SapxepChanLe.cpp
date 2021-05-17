#include <stdio.h>
void Nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void sapxep(int a[], int n)
{
 int i, j;
 for (i = 0; i < n - 1;i++)
 for (j = i + 1; j < n;j++)
 if ((a[i] % 2 != 0 && a[j] % 2 == 0) 
  || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i]>a[j]) 
  || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i]>a[j]))
 {
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
 }
}
void Xuat(int a[], int n) {
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[100], n;
    scanf("%d", &n);
    Nhap(a, n);
    sapxep(a, n);
    Xuat(a, n);
}

