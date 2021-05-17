// Nhập các số nguyên từ bàn phím rồi in ra số dầu tiên
// VD 12345 first = 1
// Nhap 1 so roi su dung phep chia phan nguyen cho 10   
#include <stdio.h>
int main(){
    int n;
    printf("Nhap so vao ban phim: ");
    scanf("%d", &n);
    int first = n;
    // /* VOI VONG LAP FOR
    //for (;first > 9;){
    //    first /= 10;
    //}
    // /* VOI VONG LAP WHILE
    //while (first > 9){
    //    first /= 10;
    //}
    // /* VOI VONG LAP DO WHILE
    do
    {
        if (n < 10){
            printf("Chu so dau tien cua %d la %d", n, first);
        }
        first /= 10;
    } while (first > 9);
    
    printf("Chu so dau tien cua %d la %d", n, first);

}



