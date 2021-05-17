#include <stdio.h>
int giaithua(int num){
    if (num == 0 || num == 1) return 1;
    return num * giaithua(num - 1);
}
int so(int a){
    int k = 0;
    int num;
}
int main(){
    int a, num, tmp, k;
    k = 0;
    scanf("%d", &a);
    tmp = a;
    while (tmp > 0){
        num = tmp % 10;
        k = k + giaithua(num);
        tmp /= 10;
    }
    if (k == a) printf("1");
    else printf("0");

    }
    


