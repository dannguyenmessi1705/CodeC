#include <stdio.h>
int main(){
    int n;
    printf("Nhap so tu ban phim: ");
    scanf("%d", &n);
    int tmp = n, chan = 0, le = 0;
    while (tmp != 0){
        int k = tmp % 10;
        tmp = tmp / 10;
        if (k % 2 == 0){
            chan++;
        } 
        else le++;
    }
    printf("So chu so chan va le cua %d la %d va %d", n, chan, le);



}