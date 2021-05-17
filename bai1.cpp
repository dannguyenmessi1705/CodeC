#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 1000000000){
        return 0;}
    else {
    int tmp = n, chan = 0, le = 0;
    while (tmp != 0){
        int k = tmp % 10;
        tmp = tmp / 10;
        if (k % 2 == 0){
            chan++;
        } 
        else le++;
    }
    printf("%d %d", le, chan);
    }



}
