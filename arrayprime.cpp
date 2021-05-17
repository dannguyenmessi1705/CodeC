/* Nhập các số từ mảng, đếm xem có bao nhiêu số nguyên tố, chỉ ra số đó
*/
#include <stdio.h>
#include <math.h>
void Nhap(int a[], int n){
    for (int i=0;i<n;i++){
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
}
bool IsPrime(int n){
    if (n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int Count(int a[], int n){
    int count = 0;
    for (int i=0;i<n;i++){
        if (IsPrime(a[i])){
            count++;
        }
    }
    return count;
}
int Prime(int a[], int n){
    for (int i=0;i<n;i++){
        if (IsPrime(a[i])){
            printf("%d\t", a[i]);
        }
    }
}
int main(){
    int a[100], n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
}
while (n<0 || n>100);
Nhap(a, n);
Xuat(a, n);
int countprime = Count(a, n);
printf("\nCo %d so nguyen to", countprime);
if (countprime > 0)
printf("\nCac chu so nguyen to la: ");
Prime(a, n);
}