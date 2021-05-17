#include <stdio.h>
int main (){
    int n, tmp, k;
    scanf("%d", &n);
    int i = n;
    k = n % 10;
    while (n >= 10) {
        int f = n % 10;
        n /= 10;
    }
    tmp = n;
    n = k;
    k = tmp;
    printf("%d%d%d", n, i, k);

}