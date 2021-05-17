/*
 Kiểm tra số nguyên xem nó được tạo bởi các số chẵn hay không
*/
#include <stdio.h>
int main (){
    int n;
    printf("Nhap so ");
    scanf("%d", &n);
    bool number = true;
    while (n > 0){
        int k = n % 10;
        n /= 10;
        if (k % 2 == 1){
            number = false;
            break;}
    } if (number)
    printf("Toan chu so chan");
    else
    printf("Co chu so le");


}