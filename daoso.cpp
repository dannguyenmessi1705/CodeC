#include <stdio.h>
int main(){
    int n, tmp;
    printf("\nNhap so: ");
    scanf("%d", &n);
    int k = 0;
    while (n>0){
        tmp = n % 10;
        k = k * 10 + tmp;
        n /= 10;
    }
    printf("So dao nguoc la: %d", k);

}