#include <stdio.h>
float x1(int a, float b){
    return -b / a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 & b != 0) printf("Vo nghiem");
    else if (a==0 && b==0) printf("Vo so nghiem");
    else printf("%.2f", x1(a, b));
}