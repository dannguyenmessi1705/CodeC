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
int ng(int a, int b){
    return a / b;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sum(a, b));
    printf("\n%d", sub(a, b));
    printf("\n%d", mul(a, b));
    printf("\n%d", ng(a, b));
    printf("\n%d", mod(a, b));
    printf("\n%.2f", div(a, b));
    
}