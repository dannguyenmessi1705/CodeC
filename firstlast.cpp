#include <stdio.h>
int main (){
    int n, f, k;
    scanf("%d", &n);
    k = n % 10;
while (n >= 10) {
        int f = n % 10;
        n /= 10;
    }
    
    printf("%d %d", n, k);
}