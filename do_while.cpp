// Nhap 1 so nguyen duong tu ban phim.
#include <stdio.h>
int main(){
    int number;
    do{
        printf("\n Nhap so tu ban phim ");
        scanf("%d", &number);
    } while (number < 1);
    printf("\nnumber = %d", number);
    
}