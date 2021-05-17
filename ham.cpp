#include <stdio.h>
int sum(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
float div(float a, int b){
    return a / b;
}
int mod(int a, int b){
    return a % b;
}
int mul(int a, int b){
    return a * b;
}
int main(){
    int a, b;
    printf("Nhap 2 so a va b ");
    scanf("%d%d", &a, &b);
    printf("\nTong 2 chu so %d + %d = %d", a, b, sum(a, b));
    printf("\nHieu 2 chu so %d - %d = %d", a, b, sub(a, b));
    printf("\nThuong 2 chu so %d / %d = %.2f", a, b, div(a, b));
    printf("\nTich 2 chu so %d * %d = %d", a, b, mul(a, b));
    printf("\nChia du 2 chu so %d %% %d = %d", a, b, mod(a, b));

}