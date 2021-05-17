#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a<=0 || b<=0)
    { printf("0");}
    else 
    { int p = (a+b)*2, s = a*b;
    printf ("%d %d", p, s);}
}