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
    scanf("%d%d", &a, &b);
    if (a > 1000 || b > 1000) return 0;
    else if (b == 0) printf("0");
    else {
    printf("%d", sum(a, b));
    printf(" %d", sub(a, b));
    printf(" %d", mul(a, b));
    printf(" %.2f", div(a, b));
    printf(" %d", mod(a, b));
    }
}