#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    if (n < 10){
        printf("%1");
    }while (n != 0) {
        if (n /= 10 != 0){
        int k = n % 10;
        count ++;
        n /= 10;}
    }
    printf("%d", count);
}