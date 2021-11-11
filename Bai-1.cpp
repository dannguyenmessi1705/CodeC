#include <stdio.h>
#include <math.h>
typedef struct SoPhuc{
    float re, im;
} S;
S Cong(S a, S b){
    S c;
    c.re=a.re + b.re;
    c.im=a.im + b.im;
    S h;
    h.re = c.re - c.im * c.im;
    h.im = 2*c.re*c.im;
    return h;
}
S Nhan(S a, S b){
    S c;
    c.re=a.re * b.re - a.im * b.im;
    c.im=a.re * b.im + a.im * b.re;
    S d;
    d.re=c.re * a.re - c.im * a.im;
    d.im=c.re * a.im + c.im * a.re;
    return d;
}
int main(){
    int t;
    S a,b,c,d,h;
    scanf("%d", &t);
    while(t--){
        scanf("%f%f%f%f", &a.re, &a.im, &b.re, &b.im);
        printf("%f + %fi, %f + %fi\n", Cong(a,b).re, Cong(a,b).im, Nhan(a,b).re, Nhan(a,b).im);
    }
}