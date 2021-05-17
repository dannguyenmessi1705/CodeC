/*
Nhập vào 2 số nguyên a, b
Nhập vào phép toán +, -, *, /
Thực hiện tính toán theo phép toán nhập vào với hai số a, b 
*/
#include <stdio.h>
int main(){
    int a, b;
    char k;
    printf("\nNhap mot phep tinh: ");
    scanf("%c", &k);
    printf("\nNhap hai so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    switch (k)
    {
    
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if(b == 0){
            printf("Khong the chia cho 0!");
        }else{
            printf("%d / %d = %.2f", a, b, (float)a / b);
        }
        break;
 
    default:
    printf("Khong co phep toan %c!", k);
        break;
    }

}